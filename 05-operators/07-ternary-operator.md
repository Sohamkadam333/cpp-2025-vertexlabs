# 6. Ternary or Conditional Operators

#### Ternary or conditional operator returns the value, based on the condition. 

```cpp
Expression1 ? Expression2 : Expression3
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 3, b = 4;

    // Conditional Operator
    int result = (a < b) ? b : a;
    cout << "The greatest number is " << result;

    return 0;
}
```