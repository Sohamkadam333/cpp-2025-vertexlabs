# endl and \n

## endl (End Line)

#### Purpose: endl is an I/O manipulator that inserts a newline character (\n) into the output and then flushes the output buffer.

### Key Features:
- It outputs a newline (\n).
- After printing the newline, it flushes the output buffer, which forces the content to be written to the output device immediately.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, ";
    cout << "world!" << endl;  // Outputs "Hello, world!" followed by a newline and flushes the output buffer
    return 0;
}
```

## "\n" (Newline Character)

#### Purpose: "\n" is a newline character (also called a line feed) that tells the system to move to the next line in the output. It’s a simple character that inserts a line break.

### Key Features:
- It only inserts a newline character (\n), which is equivalent to moving the cursor to the next line.
- It does not flush the output buffer. The output may remain in the buffer until it's flushed implicitly by the system or explicitly by using flush().

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, ";
    cout << "world!\n";  // Outputs "Hello, world!" followed by a newline, but doesn't flush the buffer
    return 0;
}
```