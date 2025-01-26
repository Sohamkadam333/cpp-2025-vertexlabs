# Type Modifiers
#### In C++, type modifiers are the keywords used to change or give extra meaning to already existing data types. It is added to primitive data types as a prefix to modify their size or range of data they can store.

<img src='../images/ModifiersInC.png' width='600px' height='300px'>

## 1. signed Modifier
#### The signed modifier indicates that the given variable variables can store both positive and negative values. To specify any variable as signed, just add the keyword signed at the start of the variable declaration.

```cpp
#include <iostream>
using namespace std;

int main() {
  
      // Printing the size of normal and signed int
      cout << "signed int size: " << sizeof(signed int)
          << " bytes" << endl;
    cout << "int size: " << sizeof(int) << " bytes";

    return 0;
}
```
---

## 2. unsigned Modifier

#### The unsigned modifier indicates that the given variables can store only non-negative integer values. Like signed modifier, it is also added at the start of the variable declaration to define the given variable as unsigned.

```cpp
#include <iostream>
using namespace std;

int main() {
  
      // Declaring unsigned integer with negative value
      unsigned int unsigned_i = -10;
      
      // Declaring normal integer with negative value
      int i = -10;
  
      // Printing the value and size
    cout << "unsigned_i: " << unsigned_i << endl;
      cout << "unsigned int size: " << sizeof(unsigned_i)
          << " bytes" << endl;
    cout << "i: " << i << endl;
    cout << "int size: " << sizeof(i) << " bytes";

    return 0;
}
```

---

## 3. short Modifier
#### The short keyword decreases the size of the data type in the memory. It leads to the decrease in the range of value that the given data type can store. A variable can be declared as short by adding the short keyword before the variable declaration.

```cpp
#include <iostream>
using namespace std;

int main() {
  
      // Printing the size of short and normal ints
    cout << "short int size: " << sizeof(short int)
          << " bytes" << endl;
      cout << "int size: " << sizeof(int)
          << " bytes";
    return 0;
}
```
---

## 4. long Modifier

#### The long keyword increases the size of the data type in memory. It leads to increase in the range of value that the given data type can store. A variable can be declared as long by adding the long keyword before the variable declaration.

```cpp
#include <iostream>
using namespace std;

int main() {
  
      // Printing the size of long and normal ints
      // double and long double
    cout << "int size: " << sizeof(int)
          << " bytes" << endl;
      cout << "long int size: " << sizeof(long int)
          << " bytes" << endl;
      cout << "double size: " << sizeof(double)
          << " bytes" << endl;
      cout << "long double size: " << sizeof(long double)
          << " bytes";
    return 0;
}
```