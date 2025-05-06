# Exception Handling

- Exceptions are unexpected problems or errors that occur while a program is running
- For example, in a program that divides two numbers, dividing a number by 0 is an exception as it may lead to undefined errors.
- The process of dealing with exceptions is known as exception handling.
- It allows programmers to make the program ready for any errors that may happen during execution and handle them gracefully so that it keeps running without errors.

### Exception Handle

- try block
- catch block
- throw statement

### try-catch Block

C++ provides an inbuilt feature for handling exceptions using try and catch block. It is an exception handling mechanism where the code that may cause an exception is placed inside the try block and the code that handles the exception is placed inside the catch block.

```cpp
try {         
    // Code that might throw an exception
} 
catch (ExceptionType e) {   
    // exception handling code
}
```

### Throwing Exceptions

Throwing exception means returning some kind of value that represent the exception from the try block. The matching catch block is found using the type of the thrown value. The throw keyword is used to throw the exception.

```cpp
try {         
    throw val
} 
catch (ExceptionType e) {   
    // exception handling code
}
```

### There are three types of values that can be thrown as an exception:

- Built-in Types
- Standard Exceptions
- Custom Exceptions


### Throwing Built-in Types

```cpp
#include <iostream>
using namespace std;

int main(void) {
    int x = 7;
    try {
        if (x % 2 != 0) {
            
            // Throwing int
            throw -1;
        }
    }
    
    // Catching int
    catch (int e) {
        cout << "Exception Caught: " << e;
    }
    return 0;
}
```


### Throwing Standard Exceptions

Standard exceptions are the set of classes that represent different types of common exceptions. All these classes are defined inside <stdexcept> header file and mainly derived from std::exception class which act as the base class for inbuilt exceptions.

<table>
<thead>
<tr>
<th>Exceptions</th>
<th>Description</th>
</tr>
</thead>
<tbody>
<tr>
<td>bad_alloc</td>
<td>thrown by new on allocation failure</td>
</tr>
<tr>
<td>bad_cast</td>
<td>thrown by dynamic_cast when it fails in a dynamic cast</td>
</tr>
<tr>
<td>bad_exeption</td>
<td>thrown by certain dynamic exception specifiers</td>
</tr>
<tr>
<td>bad_typeid</td>
<td>thrown by typeid</td>
</tr>
<tr>
<td>bad_function_call</td>
<td>thrown by empty function objects</td>
</tr>
<tr>
<td>bad_weak_ptr</td>
<td>thrown by shared_ptr when passed a bad weak_ptr</td>
</tr>
<tr>
<td>logic_error</td>
<td>error related to the internal logic of the program</td>
</tr>
<tr>
<td>runtime_error</td>
<td>error related to the internal logic of the program</td>
</tr>
</tbody>
</table>

```cpp
#include <iostream>
#include <exception>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    
    try {
        // Accessing out of bound element
       throw v.at(10);
    }
    catch (out_of_range e) {
        cout << "Caught: " << e.what() <<endl;
    }
    
    cout<<"Hello world"<<endl;
    return 0;
}
```


### Throwing Custom Exceptions

When the standard exceptions cannot satisfy our requirement, we can create a custom exception class. It is recommended to inherit standard exception in this class to provide seamless integrity with library components though, it is not compulsory.

```cpp
#include <iostream>
#include <stdexcept>

class MyCustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred";
    }
};

void riskyFunction() {
    throw MyCustomException();
}

int main() {
    try {
        riskyFunction();
    } catch (const MyCustomException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}

```


```cpp
// Exception Code
#include <iostream>
using namespace std;

int main()
{
  int no1 = 10;
  int no2 = 0;

  cout << "Enter a number ";
  cin >> no2;

  int res = no1 / no2;

  cout << "Result = " << res;

  return 0;
}
```

```cpp
// Exception Code
#include <iostream>
using namespace std;

int main()
{
  int no1 = 10;
  int no2 = 0;

  cout << "Enter a number ";
  cin >> no2;

  int res = 0;
  try
  {
    if (no2 == 0)
    {
      throw 1;
    }
    res = no1 / no2;
  }
  catch (int a)
  {
    cout << "In Catch a = " << a << endl;
  }

  cout << "Result = " << res;
  return 0;
}
```