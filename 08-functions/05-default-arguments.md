# Default Arguments

#### A default argument is a value provided for a parameter in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for those parameters. If the value is passed for it, the default value is overridden by the passed value.

```cpp
#include <iostream>
using namespace std;

// Function with an argument with default value
void f(int a = 10) {
    cout << a << endl;
}

int main() {
      
      // Uses default argument
      f();
  
      // Uses passed value
      f(221);
  
    return 0;
}

```

### Rules for Using Default Arguments

### 1. Default Values Must Be Specified in Function Declarations
#### The default values for parameters must be specified in the function declaration (or prototype). If a function is declared and defined separately, the default values must be in the declaration, not in definition.

```cpp
// Declaration with default argument
void func(int x = 10);

// Definition without default argument
void func(int x) {
    cout << "Value: " << x << endl;
}
```

### 2. Default Arguments Cannot Be Modified
#### Once default arguments are defined, they cannot be modified in the function definition. If you try to change the default value in the definition, it will result in a compilation error.

```cpp
// Declaration
void f(int a = 10);

// This definintion will throw and error
void f(int a = 222) {
      // statements
}
```

### 3. Default Arguments Must Be Provided from Right to Left
#### In a function with multiple parameters, default values must be provided from the rightmost parameter to the left. If a parameter has a default argument, all parameters to its right must also have default values.

```cpp
// Valid
void func(int x, int y = 20);

// Invalid, as `y` does not have a default value
void func(int x = 10, int y);
```

### 4. Ambiguity in Function Overloading
#### If a function containing default arguments is overloaded, then we need to make sure it is not ambiguous to the compiler, otherwise it will throw an error.

```cpp
// Valid
void f(int a = 10, int b = 20);
  
// Will throw error as the signature is same
void f(int a = 22, int b = 2);

// Will also throw error
void f(int a);

// Will also throw an error
void f(int a, b)
```


### Advantages of Default Arguments
- Default arguments are useful when we want to increase the capabilities of an existing function as we can do it just by adding another default argument to the function.
- It helps in reducing the size of a program.
- It provides a simple and effective programming approach.
- Default arguments improve the consistency of a program.

### Disadvantages of Default Arguments
- If the default values are not well-documented or understood, it can lead to confusion about what arguments are being used.
- Overloading functions with default arguments can sometimes lead to ambiguities,
- It increases the execution time as the compiler needs to replace the omitted arguments by their default values in the function call.