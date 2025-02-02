# cin

#### In C++, cin is an object of istream class that is used to accept the input from the standard input stream i.e. stdin which is by default associated with keyboard. The extraction operator (>>) is used along with cin to extract the data from the object and insert it to the given variable.

```cpp
#include <iostream>
using namespace std;

int main() {
  
      // Variable to store data given by cin
    int a;

    // Take input using cin
    cin >> a;

    cout << a;
    return 0;
}
```

### Taking a Text from User Input

```cpp
#include <iostream>
using namespace std;

int main() {
  
      // Variable to store data given by cin
    string s;

    // Take input using cin
    cin >> s;

    // Print output
    cout << s;
    return 0;
}
```


### Taking Multiple Inputs Using the Extraction Operator(>>) with cin

```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    // Take multiple input using cin
    cin >> name >> age;

    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;

    return 0;
}
```
---

### cin.get()

#### cin.get() is used to read a single character from the standard input. It can be used to read a single character, including whitespace (like spaces, tabs, or newlines).

```cpp
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    ch = cin.get();  // Reads a single character from input
    cout << "You entered: " << ch << endl;

    return 0;
}
```
---


### cin.getline()

#### cin.getline() is used to read an entire line of input, including spaces, into a character array (C-style string). The function stops reading when it encounters a newline character (\n) or reaches the specified maximum number of characters.

```cpp
#include <iostream>
using namespace std;

int main() {
    char str[100];  // Define a character array with enough space for the input

    cout << "Enter a line of text: ";
    cin.getline(str, 100);  // Reads a line of text, up to 99 characters (leaving space for the null terminator)

    cout << "You entered: " << str << endl;

    return 0;
}
```