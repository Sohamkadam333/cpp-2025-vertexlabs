# 1. Arithmetic Operators

#### Arithmetic operators are used to perform arithmetic or mathematical operations on the operands. For example, ‘+’ is used for addition.

<table><thead><tr><th><b><strong>Name</strong></b></th><th><b><strong>Symbol</strong></b></th><th><b><strong>Description</strong></b></th></tr></thead><tbody><tr><th><b><strong>Addition</strong></b></th><td><b><strong>+</strong></b></td><td><span>Adds two operands.</span></td></tr><tr><th><b><strong>Subtraction</strong></b></th><td><b><strong>–</strong></b></td><td><span>Subtracts second operand from the first.</span></td></tr><tr><th><b><strong>Multiplication</strong></b></th><td><b><strong>*</strong></b></td><td><span>Multiplies two operands.</span></td></tr><tr><th><b><strong>Division</strong></b></th><td><b><strong>/</strong></b></td><td><span>Divides first operand by the second operand.</span></td></tr><tr><th><b><strong>Modulo Operation</strong></b></th><td><b><strong>%</strong></b></td><td><span>Returns the remainder an integer division.</span></td></tr><tr><th><p dir="ltr"><b><strong>Increment</strong></b></p>
</th><td>
<p><b><strong>++</strong></b></p>
</td><td><p dir="ltr"><span>Increase the value of operand by 1.</span></p>
</td></tr><tr><th><p dir="ltr"><span>Decrement</span></p>
</th><td>
<p><b><strong>—</strong></b></p>
</td><td><p dir="ltr"><span>Decrease the value of operand by 1.</span></p>
</td></tr></tbody></table>



```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 8, b = 3;

    // Addition
    cout << "a + b = " << (a + b) << endl;
  
    // Subtraction
    cout << "a - b = " << (a - b) << endl;
  
    // Multiplication
    cout << "a * b = " << (a * b) << endl;
  
    // Division
    cout << "a / b = " << (a / b) << endl;
  
    // Modulo
    cout << "a % b = " << (a % b) << endl;
  
    // Increament
    cout << "++a = " << ++a << endl;
  
    // Decrement
    cout << "--b = " << --b;
    
    return 0;
}
```