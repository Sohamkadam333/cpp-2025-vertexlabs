# 2. Relational Operators
#### Relational operators are used for the comparison of the values of two operands. For example, ‘>’ check right operand is greater.

<table><thead><tr><th><b><strong>Name</strong></b></th><th><b><strong>Symbol</strong></b></th><th><span>D</span><b><strong>escription</strong></b></th></tr></thead><tbody><tr><th><span>Is Equal To</span></th><td><b><strong>==</strong></b></td><td><span>Checks both operands are equal</span></td></tr><tr><th><span>Greater Than</span></th><td><b><strong>&gt;</strong></b></td><td><span>Checks first operand is greater than the second operand</span></td></tr><tr><th><span>Greater Than or Equal To</span></th><td><b><strong>&gt;=</strong></b></td><td><span>Checks first operand is greater than equal to the second operand</span></td></tr><tr><th><span>Less Than</span></th><td><b><strong>&lt;</strong></b></td><td><span>Checks first operand is lesser than the second operand</span></td></tr><tr><th><span>Less Than or Equal To</span></th><td><b><strong>&lt;=</strong></b></td><td><span>Checks first operand is lesser than equal to the second operand</span></td></tr><tr><th><span>Not Equal To</span></th><td><b><strong>!=</strong></b></td><td><span>Checks both operands are not equal</span></td></tr></tbody></table>


```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 6, b = 4;

    // Equal operator
    cout << "a == b is " << (a == b) << endl;
  
    // Greater than operator
    cout << "a > b is " << (a > b) << endl;
  
    // Greater than Equal to operator
    cout << "a >= b is " << (a >= b) << endl;
  
    //  Lesser than operator
    cout << "a < b is " << (a < b) << endl;
  
    // Lesser than Equal to operator
    cout << "a <= b is " << (a <= b) << endl;
  
    // Not equal to operator
    cout << "a != b is " << (a != b);

    return 0;
}
```