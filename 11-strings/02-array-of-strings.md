# Array of Strings

In C++, a string is usually just an array of (or a reference/points to) characters that ends with the NULL character ‘\0‘. A string is a 1-dimensional array of characters, and an array of strings is a 2-dimensional array of characters where each row contains some string.

- Create Array of Strings Using Pointers
- Create Array of Strings Using a 2D Array
- Create Array of Strings Using String Class
- Create Array of Strings Using Vector Class
- Create Array of Strings Using Array Class

## 1. Create Array of Strings Using Pointers
Pointers are the symbolic representation of an address. In simple words, a pointer is something that stores the address of a variable in it. In this method, an array of string literals is created by an array of pointers in which each pointer points to a particular string.

```cpp
// C++ program to demonstrate
// array of strings using
// pointers character array
#include <iostream>

using namespace std;

// Driver code
int main()
{
    // Initialize array of pointer
    const char* colour[4]
        = { "Blue", "Red", "Orange", "Yellow" };

    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        cout << colour[i] << "\n";

    return 0;
}
```


## 2. Create Array of Strings Using a 2D Array
A 2-D array is the simplest form of a multidimensional array in which it stores the data in a tabular form. This method is useful when the length of all strings is known and a particular memory footprint is desired. Space for strings will be allocated in a single block


```cpp
// C++ program to demonstrate
// array of strings using
// 2D character array
#include <iostream>

using namespace std;

// Driver code
int main()
{
    // Initialize 2D array
    char colour[4][10]
        = { "Blue", "Red", "Orange", "Yellow" };

    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        cout << colour[i] << "\n";

    return 0;
}
```


## 3. Create Array of Strings Using String Class
The STL string or string class may be used to create an array of mutable strings. In this method, the size of the string is not fixed, and the strings can be changed which somehow makes it dynamic in nature nevertheless std::string can be used to create a string array using in-built functions.

```cpp
// C++ program to demonstrate
// array of strings using
// string class
#include <iostream>
#include <string>

using namespace std;

// Driver code
int main()
{
    // Initialize String Array
    string colour[4]
        = { "Blue", "Red", "Orange", "Yellow" };

    // Print Strings
    for (int i = 0; i < 4; i++)
        cout << colour[i] << "\n";

    return 0;
}
```

## 4. Create Array of Strings Using Vector Class
A vector is a dynamic array that doubles its size whenever a new character is added that exceeds its limit. The STL container vector can be used to dynamically allocate an array that can vary in size.

This is only usable in C++, as C does not have classes. Note that the initializer-list syntax here requires a compiler that supports the 2011 C++ standard, and though it is quite likely your compiler does, it is something to be aware of.

```cpp
// C++ program to demonstrate
// array of strings using
// vector class
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Driver code
int main()
{
    // Declaring Vector of String type
    // Values can be added here using
    // initializer-list
    // syntax
    vector<string> colour{ "Blue", "Red", "Orange" };

    // Strings can be added at any time
    // with push_back
    colour.push_back("Yellow");

    // Print Strings stored in Vector
    for (int i = 0; i < colour.size(); i++)
        cout << colour[i] << "\n";

    return 0;
}
```

## 5. Create Array of Strings Using Array Class
An array is a homogeneous mixture of data that is stored continuously in the memory space. The STL container array can be used to allocate a fixed-size array. It may be used very similarly to a vector, but the size is always fixed.

```cpp
// C++ program to demonstrate
// array of string using STL array
#include <array>
#include <iostream>
#include <string>

using namespace std;

// Driver code
int main()
{
    // Initialize array
    array<string, 4> colour{ "Blue", "Red", "Orange",
                             "Yellow" };

    // Printing Strings stored in array
    for (int i = 0; i < 4; i++)
        cout << colour[i] << "\n";

    return 0;
}
```