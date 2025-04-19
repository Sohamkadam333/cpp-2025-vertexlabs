# 1. Compile Time Polymorphism

# Function Overloading

Function overloading is a feature in C++ that allows multiple functions to share the same name but have different parameter lists (number, type, or order of parameters). The compiler distinguishes between them based on their signature (parameters), enabling compile-time polymorphism.


- Return type is not part of the function signature. Overloading based solely on return type is invalid.
- Functions must differ in at least one parameter type, count, or order.
- Overloading works for both standalone functions and class member functions (including constructors).

## Need of Function Overloading

- Semantic Clarity: Use the same function name for logically similar operations (e.g., add() for integers, floats, etc.).
- Simplify Naming: Avoid cluttering code with names like printInt, printDouble, etc.
- Constructor Flexibility: Constructors must have the same name as the class, making overloading essential for object initialization with different parameters.
- API Usability: Provide intuitive interfaces (e.g., draw(circle), draw(rectangle)).


#### Example Procedural (Non-OOP) Example

```cpp
#include <iostream>
using namespace std;

// Overloaded print functions
void print(int i) {
    cout << "Integer: " << i << endl;
}

void print(double d) {
    cout << "Double: " << d << endl;
}

void print(const char* s) {
    cout << "String: " << s << endl;
}

int main() {
    print(5);          // Calls print(int)
    print(3.14);       // Calls print(double)
    print("Hello");    // Calls print(const char*)
    return 0;
}
```


#### Example OOP

```cpp
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    // Overloaded constructors
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    Date(const string& s) { 
        // Parse date from string (e.g., "dd-mm-yyyy")
        // Implementation omitted for brevity
    }

    // Overloaded member function
    void display(const string& format) {
        cout << "Formatted date: " << format << endl;
    }

    void display() {
        cout << "Default date: " << day << "-" << month << "-" << year << endl;
    }
};

int main() {
    Date d1(15, 8, 2023);    // Calls Date(int, int, int)
    Date d2("15-08-2023");    // Calls Date(const string&)
    d1.display();             // Calls display()
    d1.display("YYYY/MM/DD"); // Calls display(const string&)
    return 0;
}
```


### Internals

Name Mangling: The compiler generates unique names for overloaded functions by encoding parameter types into the function name (e.g., _Z4funcid for func(int, double)). This ensures the linker sees distinct symbols.

Overload Resolution: The compiler selects the best match using the following priority:

Exact type match.
- Type promotions (e.g., int to long).
- Standard conversions (e.g., int to double).
- User-defined conversions (via constructors/operators).
- Ambiguity: A compile-time error occurs if multiple overloads are equally viable (e.g., func(5) with overloads func(int) and func(double) if no exact match exists).