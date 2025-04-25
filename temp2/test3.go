package main

import (
	"bufio"
	"fmt"
	"net/http"
	"os"
	"path/filepath"
	"sync"
)

func checkURLStatus(url string, wg *sync.WaitGroup) {
	defer wg.Done()

	// Send a GET request to the URL
	resp, err := http.Get(url)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	defer resp.Body.Close()

	// Output the status code
	fmt.Printf("URL: %s\nStatus Code: %d\n", url, resp.StatusCode)
}

func getURLsFromFile(filePath string) ([]string, error) {
	var urls []string
	file, err := os.Open(filePath)
	if err != nil {
		return nil, err
	}
	defer file.Close()

	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		urls = append(urls, scanner.Text())
	}

	if err := scanner.Err(); err != nil {
		return nil, err
	}

	return urls, nil
}

func main() {
	// Get the directory of the executable file
	exeDir, err := filepath.Abs(filepath.Dir(os.Args[0]))
	if err != nil {
		fmt.Println("Error getting executable directory:", err)
		return
	}

	// Define the path of the URL file (assumes urls.txt is in the same directory as the .exe)
	urlFilePath := filepath.Join(exeDir, "urls.txt")

	// Get the URLs from the file
	urls, err := getURLsFromFile(urlFilePath)
	if err != nil {
		fmt.Println("Error reading URLs from file:", err)
		return
	}

	// If no URLs are found
	if len(urls) == 0 {
		fmt.Println("No URLs found in the file.")
		return
	}

	// Create a WaitGroup to wait for all goroutines to finish
	var wg sync.WaitGroup

	// Loop through all URLs and check each one concurrently
	for _, url := range urls {
		wg.Add(1)
		go checkURLStatus(url, &wg)
	}

	// Wait for all goroutines to finish
	wg.Wait()
}
