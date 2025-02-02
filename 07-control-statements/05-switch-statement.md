# Switch Statement

#### In C++, the switch statement is a flow control statement that is used to execute the different blocks of statements based on the value of the given expression. It is an alternative to the long if-else-if ladder which provides an easy way to execute different parts of code based on the value of the expression.


```cpp
#include <iostream>
using namespace std;

int main() {
      
    // Variable to the used as switch expression
    char x = 'A';

    // Switch statement with three cases
    switch (x) {
    case 'A':
        cout << "A";
        break;
    case 'B':
        cout << "B";
        break;
    default:
        cout << "Other than A and B";
        break;
    }
    return 0;
}
```


### Rules of the switch Statement in C++

- The case value must be either int or char type.
- There can be any number of cases.
- No duplicate case values are allowed.
- Each statement of the case can have a break statement. It is optional.
- The default Statement is also optional.