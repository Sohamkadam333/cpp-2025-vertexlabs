# cerr and clog

## cerr (Character Error Stream)
#### Purpose: cerr is used for outputting error messages. It is primarily intended for error reporting and is typically used when you need to output a message that indicates an issue or failure in your program.

### Characteristics:

- Unbuffered: cerr is unbuffered, meaning that the output is immediately sent to the standard error stream without being stored in a buffer. This ensures that error messages are printed to the console immediately, even if the program crashes or encounters an issue.

- Streams to Standard Error: By default, cerr writes to the standard error stream (stderr), which is usually separate from the standard output (stdout) stream.

- Used for Errors: cerr is typically used to print error messages or diagnostic information that you want to appear immediately on the screen, especially when the program fails or runs into problems.

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = -1;
    if (x < 0) {
        cerr << "Error: x cannot be negative!" << endl;
    }
    return 0;
}
```

## clog (Character Log Stream)

#### Purpose: clog is used for logging messages. Unlike cerr, it’s typically used for non-error messages, such as status updates or debugging information. It can be used to log messages that are useful for tracing program execution or for general logging purposes.

### Characteristics:

- Buffered: clog is buffered, meaning that the output is stored in a buffer before being written to the screen or the log file. This can improve performance since writing to a buffer is typically faster than writing directly to the output stream.
 
- Streams to Standard Error: Although clog writes to the standard error stream (stderr) like cerr, it is used for logging instead of reporting errors.

- Used for Logging: clog is used for informational messages, such as logging the progress of an operation, status updates, or debug information that is not necessarily an error but should still be recorded.
  
```cpp
#include <iostream>
using namespace std;

int main() {
    clog << "Program started..." << endl;
    
    int x = 5;
    clog << "x is set to: " << x << endl;

    if (x > 0) {
        clog << "x is positive!" << endl;
    }

    return 0;
}
```


### Example of Both cerr and clog Used Together

```cpp
#include <iostream>
using namespace std;

int main() {
    int value = 42;

    clog << "Program started..." << endl;

    if (value <= 0) {
        cerr << "Error: Value must be positive!" << endl;
    } else {
        clog << "Value is valid: " << value << endl;
    }

    return 0;
}
```