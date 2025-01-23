# First C++ Program


```cpp
// Header file for input output functions
#include <iostream>
using namespace std;

// main() function: where the execution of
// C++ program begins
int main() {
  
    // This statement prints "Hello World"
    cout << "Hello World";

    return 0;
}
```

```cpp
// I am comment
```
- This line is a comment line. A comment is used to display additional information about the program. A comment does not contain any programming logic. When a comment is encountered by a compiler, the compiler simply skips that line of code.


```cpp
#include <iostream>
```
- The #include is a preprocessor directive tells the compiler to include the content of a file in the source code. For example, #include<iostream> tells the compiler to include the input-output library which contains all C++’s input/output library functions.

```cpp
using namespace std
```
- This is used to import the entity of the stdnamespace into the current namespace of the program. It is basically the space where all the inbuilt features of C++ are declared. For example, std::cout.


```cpp
int main() { }
```
- The main() function is the entry point of every C++ program, no matter where the function is located in the program. The opening braces ‘{‘ indicates the beginning of the main function and the closing braces ‘}’ indicates the ending of the main function.

```cpp
cout<<"Hello World";
```
- The coutis a tool (object) that is used to display output on the console screen. Everything followed by the character << in double quotes ” ” is displayed on the output screen. The semi-colon character at the end of the statement is used to indicate that the statement is ending there.


```cpp
return 0;
```
- This statement is used to return a value from a function and indicates the finishing of a function. Here, it is used to sent the signal of successful execution of the main function.