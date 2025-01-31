5. Assignment Operators

#### Assignment operators are used to assign value to a variable. We assign the value of right operand into left operand according to which assignment operator we use.

<table><thead><tr><th><p dir="ltr" style="text-align: center;"><span>Name</span></p>
</th><th><p dir="ltr" style="text-align: center;"><span>Symbol</span></p>
</th><th><p dir="ltr" style="text-align: center;"><span>Description</span></p>
</th></tr></thead><tbody><tr><th><span>Assignment</span></th><td><p style="text-align: center;"><b><strong>=</strong></b></p>
</td><td><span>Assigns the value on the right to the variable on the left.</span></td></tr><tr><th><span>Add and Assignment</span></th><td><p style="text-align: center;"><b><strong>+=</strong></b></p>
</td><td><span>First add right operand value into left operand then assign that value into left operand.</span></td></tr><tr><th><span>Subtract and Assignment</span></th><td><p style="text-align: center;"><b><strong>&nbsp; &nbsp; &nbsp; -= &nbsp; &nbsp; &nbsp; &nbsp;</strong></b></p>
</td><td><span>First subtract right operand value into left operand then assign that value into left operand.</span></td></tr><tr><th><span>Multiply and Assignment</span></th><td><p style="text-align: center;"><b><strong>*=</strong></b></p>
</td><td><span>First multiply right operand value into left operand then assign that value into left operand.</span></td></tr><tr><th><span>Divide and Assignment</span></th><td><p style="text-align: center;"><b><strong>/=</strong></b></p>
</td><td><span>First divide right operand value into left operand then assign that value into left operand.</span></td></tr></tbody></table>


```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 6, b = 4;

    // Assignment Operator.
    cout << "a = " << a << endl;
  
    //  Add and Assignment Operator.
    cout << "a += b is " << (a += b) << endl;
  
    // Subtract and Assignment Operator.
    cout << "a -= b is " << (a -= b) << endl;
  
    //  Multiply and Assignment Operator.
    cout << "a *= b is " << (a *= b) << endl;
  
    //  Divide and Assignment Operator.
    cout << "a /= b is " << (a /= b);

    return 0;
}
```