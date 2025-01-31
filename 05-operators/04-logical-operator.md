# 3. Logical Operators

#### Logical operators are used to combine two or more conditions or constraints or to complement the evaluation of the original condition in consideration. The result returns a Boolean value, i.e., true or false.

<table><thead><tr><th><span>Name</span></th><th><span>Symbol</span></th><th><span>Description</span></th></tr></thead><tbody><tr><th><span>Logical AND</span></th><td><b><strong>&amp;&amp;</strong></b></td><td><span>Returns true only if all the operands are true or non-zero.</span></td></tr><tr><th><span>Logical OR</span></th><td><b><strong>||</strong></b></td><td><span>Returns true if either of the operands is true or non-zero.</span></td></tr><tr><th><span>Logical NOT</span></th><td><b><strong>!</strong></b></td><td><span>Returns true if the operand is false or zero.</span></td></tr></tbody></table>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 6, b = 4;

    // Logical AND operator
    cout << "a && b is " << (a && b) << endl;
  
    // Logical OR operator
    cout << "a || b is " << (a || b) << endl;
  
    // Logical NOT operator
    cout << "!b is " << (!b);

    return 0;
}
```