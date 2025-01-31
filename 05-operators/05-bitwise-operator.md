# 4. Bitwise Operators

#### Bitwise operators are works on bit-level. So, compiler first converted to bit-level and then the calculation is performed on the operands.

<table><thead><tr><th><span>Name</span></th><th><span>Symbol</span></th><th><span>Description</span></th></tr></thead><tbody><tr><th><span>Binary AND</span></th><td><b><strong>&amp;</strong></b></td><td><span>Copies a bit to the evaluated result if it exists in both operands</span></td></tr><tr><th><span>Binary OR</span></th><td><b><strong>|</strong></b></td><td><span>Copies a bit to the evaluated result if it exists in any of the operand</span></td></tr><tr><th><span>Binary XOR</span></th><td><b><strong>^</strong></b></td><td><span>Copies the bit to the evaluated result if it is present in either of the operands but not both</span></td></tr><tr><th><span>Left Shift</span></th><td><b><strong>&lt;&lt;</strong></b></td><td><span>Shifts the value to left by the number of bits specified by the right operand.</span></td></tr><tr><th><span>Right Shift</span></th><td><b><strong>&gt;&gt;</strong></b></td><td><span>Shifts the value to right by the number of bits specified by the right operand.</span></td></tr><tr><th><span>One’s Complement</span></th><td><b><strong>~</strong></b></td><td><span>Changes binary digits 1 to 0 and 0 to 1</span></td></tr></tbody></table>


```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 6, b = 4;

    // Binary AND operator
    cout << "a & b is " << (a & b) << endl;

    // Binary OR operator
    cout << "a | b is " << (a | b) << endl;

    // Binary XOR operator
    cout << "a ^ b is " << (a ^ b) << endl;

    // Left Shift operator
    cout << "a<<1 is " << (a << 1) << endl;

    // Right Shift operator
    cout << "a>>1 is " << (a >> 1) << endl;

    // One’s Complement operator
    cout << "~(a) is " << ~(a);

    return 0;
}
```