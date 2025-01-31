# Type Conversion

#### Type conversion means converting one type of data to another compatible type such that it doesn’t lose its meaning. It is essential for managing different data types in C++.

### 1. Implicit Type Conversion
#### Implicit type conversion (also known as coercion) is the conversion of one type of data to another type automatically by the compiler when needed. It happens automatically when:

- Operations are performed on values of different data types.
- If you pass an argument to a function that expects a different data type.
- Assigning a value of one data type to a variable of another data type.

```cpp
#include <iostream>
using namespace std;

int main() {
  
    int i = 10;
    char c = 'a';

    // c implicitly converted to int. ASCII
    // value of 'a' is 97
    i = i + c;

    // x is implicitly converted to float
    float f = i + 1.0;

    cout << "i = " << i << endl
         << "c = " << c << endl
         << "f = " << f;

    return 0;
}
```
---

## Explicit Type Conversion
#### Explicit type conversion, also called type casting is the conversion of one type of data to another type manually by a programmer. Here the user can typecast the result to make it of a particular data type. In C++, it can be done by two ways:

### 1. C Style Typecasting
#### This method is inherited by C++ from C. The conversion is done by explicitly defining the required type in front of the expression in parenthesis. This can be also known as forceful casting.

```cpp
(type) expression;
```

```cpp
#include <iostream>
using namespace std;

int main() {
    double x = 1.2;

    // Explicit conversion from double to int
    int sum = (int)x + 1;

    cout << sum;

    return 0;
}
```

### 2. C++ Style Typecasting
#### C++ introduced its own typecasting method using cast operators. Cast operator is an unary operator which forces one data type to be converted into another data type. C++ supports four types of casting:

- Static Cast: Used for standard compile time type conversions.
- Dynamic Cast: Used for runtime type conversion in polymorphism and inheritance.
- Const Cast: Removes or adds const or volatile qualifiers.
- Reinterpret Cast: Used for low-level reinterpretation of bits (e.g., converting pointers).