# Constants

#### Constants in C++ refer to variables with fixed values that cannot be changed. Once they are defined in the program, they remain constant throughout the execution of the program. They can be of any available data type in C++ such as int, char, string, etc

```cpp
#include <iostream>
using namespace std;

int main() {

    // Declaring and defining a constant variable
    const int c = 24;

  	cout << c;
    return 0;
}
```

### Types of Constants in C++
1. Using const Keyword
2. Using constexpr Keyword
3. Using #define Preprocessor


### Using const Keyword
Defining constants using const keyword is one of the older methods that C++ inherited from C language. In this method, we add the const keyword in the variable definition as shown below:

```cpp
const DATATYPE variable_name = value;
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int var = 10;

    // Declaring a constant variable
    const int c = 24;

    // Trying to change the value constant c
    c = 0;

    cout << c;
    return 0;
}
```


### Using constexpr Keyword

The constexpr keyword is similar to const keyword and is also used to declare constants in C++. But the major difference is that the constexpr constants are initialized at compiler time, which is why their value must be known at the compile time. On the other hand, const keyword constants can be initialized at runtime and compile time.

```cpp
constexpr DATATYPE variable_name = value ;
```

```cpp
#include <iostream>
using namespace std;

int main() {
  
    // Defining constant
    int constexpr hoursIn_day = 24;

    // Printing value
    cout << hoursIn_day;
  	return 0;
}
```

### Using #define Preprocessor

We can also define constants using the #define. Constants created using the #define preprocessor are called "macro constants". Unlike the other methods, constants defined using this method simply work as an alias for their value which is substituted during preprocessing.

```cpp
#define MACRO_NAME replacement_value
```

```cpp
#include <iostream>
using namespace std;

// Using #define to create a macro
#define Side 5

int main()
{
    // Using constant
    double area = Side * Side;

    cout << area;
    return 0;
}
```