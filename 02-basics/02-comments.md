# Comments

#### Comments in C++ are meant to explain the code as well as to make it more readable. Their purpose is to provide information about code lines. When testing alternative code, they can also be used to prevent execution of some part of the code. Programmers commonly use comments to document their work.

```cpp
#include <iostream>
using namespace std;

int main() {
  
    // single line comment
    
    cout << "GFG!";

    /*
    Multi
    line
    comment
    */

    return 0;
}
```

## How does the compiler process C++ Comments?
As a part of the compiler, the Lexical Analyzer scans the characters and transforms them into tokens with no passing of the commented text to the parser. Since Comments do not contribute to the functionality of the program they are simply omitted at the time of compilation. Accordingly, we can understand that comments are just text in programs that are ignored by the compiler.