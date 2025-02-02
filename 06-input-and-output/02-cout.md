# cout

#### In C++, cout is an object of the ostream class that is used to display output to the standard output device, usually the monitor. It is associated with the standard C output stream stdout. The insertion operator (<<) is used with cout to insert data into the output stream.


### Print Hello World
```cpp
#include <iostream>
using namespace std;

int main() {
    
    // Print standard output
    // on the screen
    cout << "Hello World";

    return 0;
}
```


### Displaying Multiple Variables
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 42;
    string s = "The answer is ";

    // Printing both n and s
    cout << s << n;
  
    return 0;
}
```

---

<table><thead><tr><th><span>Member Function</span></th><th><span>Description</span></th></tr></thead><tbody><tr><td><b><strong>cout.put(char)</strong></b></td><td><span>Writes a single character to the output stream.</span></td></tr><tr><td><b><strong>cout.write(char*, int)</strong></b></td><td><span>Writes a block of characters from the array to the output stream.</span></td></tr><tr><td><b><strong>cout.precision(int)</strong></b></td><td><span>Sets the decimal precision for displaying floating-point numbers.</span></td></tr><tr><td><b><strong>cout.setf(ios::fmtflags)</strong></b></td><td><span>Sets the format flags for the stream.</span></td></tr><tr><td><b><strong>cout.width(int)</strong></b></td><td><span>Sets the minimum field width for the next output.</span></td></tr><tr><td><b><strong>cout.fill(char)</strong></b></td><td><span>Sets the fill character for padding the field.</span></td></tr></tbody></table>

### cout.put(char)

```cpp
#include <iostream>
using namespace std;

int main() {
    char myChar = 'A';
    cout.put(myChar);  // Outputs the character 'A'
    return 0;
}
```
#### The put() function is used to output a single character, and it directly sends it to the output stream without needing to format it like with <<. It's often used when you want to handle characters specifically in a low-level manner.

--- 

### cout.write(char*, int)

```cpp
#include <iostream>
using namespace std;

int main() {
    const char* str = "Hello, World!";
    cout.write(str, 5);  // Outputs "Hello", only the first 5 characters
    return 0;
}
```

#### The write() function is useful when you want to output a specific number of characters from a string, rather than relying on the stream's default behavior of stopping at a null-terminator or outputting an entire string.

--- 

### cout.precision(int)

```cpp
#include <iostream>
using namespace std;

int main() {
    double num = 123.456789;

    cout.precision(4);  // Sets the precision to 4 significant digits
    cout << num << endl;  // Outputs: 123.5

    return 0;
}
```

#### cout.precision(4) tells the program to display 4 significant digits when printing floating-point numbers.
#### The output of num (123.456789) will be rounded to 123.5, as it shows only the first 4 significant digits.

```cpp
cout.precision(4);
cout << fixed << num;  // Outputs: 123.4568 (fixed-point with 4 digits)
```

---

### cout.width(int), cout.fill(char)

```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 42;

    cout.width(10);
    cout.fill('0');  // Set fill character to '0'
    cout << num << endl;  // Outputs: "0000000042" (padded with zeros)

    return 0;
}
```

#### cout.width(int) is used to set the field width for output. It specifies the minimum number of characters to be printed for the next output. If the output is shorter than the specified width, the output will be padded with spaces (by default) to meet the width.