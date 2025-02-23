# String Concatenation
String concatenation refers to the process of combining two or more strings into a single string. Generally, one string is appended at the end of the other string.

The simplest method to concatenate two strings in C++ is by using + operator. Let’s take a look at an example:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1("Hello");
    string s2(" World");

    // Concatenation s1 and s2
    s1 = s1 + s2;

    cout << s1;
    return 0;
}
```

The ‘+’ operator combines two string objects and returns the resulting concatenated string. However, this method only works for C++ style strings (std::string) and is not applicable to C-style character arrays.

## Using String append()
The string append() function is a member of the string class that is used to concatenate two string objects in C++. It provides an efficient way to concatenate two strings.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1("Hello");
    string s2(" World");

    // Concatenation str1 and str2
    s1.append(s2);

    cout << s1;
    return 0;
}
```


## Using strcat()

The strcat() function is a standard library function in C that is also available in C++. It is used to concatenate (append) one C-style string (character array) to another and adds a null terminator at the end. It is defined inside the <cstring> header file.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    char s1[] = "Hello";
    char s2[] = " World";

    // Concatenating s1 and s2
    strcat(s1, s2);

    cout << s1;
    return 0;
}
```

## Using for Loop
In this method, characters from one string are appended manually one by one to another while iterating through both strings using loops. The final result is a concatenated string that combines both original string.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1("Hello");
    string s2(" World");

    // Adding characters of s2 at the end of s1
    for (auto i : s2)
        s1 += i;

    cout << s1;
    return 0;
}
```