# References in C++

### **1. What is a Reference in C++?**
A **reference** in C++ is an alias for an existing variable. It acts as an alternative name for the variable and allows access to it directly without creating a copy.

**Syntax:**
```cpp
datatype &reference_name = variable_name;
```

### **2. Key Features of References**
1. **Alias**: A reference is just another name for an existing variable.
2. **No Null References**: Unlike pointers, references must always be initialized when declared.
3. **No Reassignment**: Once a reference is bound to a variable, it cannot be changed to refer to another variable.
4. **Used for Function Arguments & Return Values**: Helps in efficient function parameter passing.

---

## **3. Basic Example of References**
```cpp
#include <iostream>

int main() {
    int a = 10;
    int &ref = a;  // Reference to a

    std::cout << "a = " << a << std::endl; 
    std::cout << "ref = " << ref << std::endl;

    ref = 20;  // Changing ref changes a

    std::cout << "After modifying ref:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "ref = " << ref << std::endl;

    return 0;
}
```
### **Output:**
```
a = 10
ref = 10
After modifying ref:
a = 20
ref = 20
```
**Explanation:**  
- `ref` is another name for `a`, so modifying `ref` also modifies `a`.

---

## **4. References vs Pointers**
| Feature               | Reference (`&`)                     | Pointer (`*`)                               |
| --------------------- | ----------------------------------- | ------------------------------------------- |
| **Null Value?**       | Cannot be null                      | Can be null (`nullptr`)                     |
| **Initialization**    | Must be initialized at declaration  | Can be uninitialized                        |
| **Reassignment**      | Cannot change what it refers to     | Can be changed to point to another variable |
| **Syntax Complexity** | Easier to use (`x` instead of `*x`) | Requires dereferencing (`*ptr`)             |

### **Example: Pointer vs Reference**
```cpp
#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    int *ptr = &a; // Pointer to a
    int &ref = a;  // Reference to a

    ptr = &b; // Pointer can be changed
    // ref = &b; ❌ Error: Reference cannot be reassigned

    std::cout << "Pointer points to: " << *ptr << std::endl;
    std::cout << "Reference refers to: " << ref << std::endl;

    return 0;
}
```
---

## **5. Using References in Function Arguments**
Passing arguments by reference allows modification of the original variable without copying.

### **Example: Pass by Reference**
```cpp
#include <iostream>

void modify(int &x) {  // Function receives reference to x
    x = x * 2;
}

int main() {
    int num = 10;
    modify(num);  // num is modified directly
    std::cout << "After function call, num = " << num << std::endl;
    return 0;
}
```
### **Output:**
```
After function call, num = 20
```
**Why?**  
- `x` refers directly to `num`, so modifying `x` also modifies `num`.

### **Why Use References in Functions?**
1. **Avoids unnecessary copying** (especially for large objects).
2. **Allows modification of original variables.**
3. **More readable syntax compared to pointers.**

---

## **6. References as Return Values**
A function can return a reference to a variable. This allows direct modification of the returned variable.

### **Example: Return by Reference**
```cpp
#include <iostream>

int& getReference(int &x) {
    return x;  // Returning reference to x
}

int main() {
    int a = 10;
    int &ref = getReference(a);
    ref = 50;  // Modifies 'a' directly

    std::cout << "a = " << a << std::endl;
    return 0;
}
```
### **Output:**
```
a = 50
```
---

## **7. `const` References (Read-Only References)**
A `const` reference allows passing variables without modification, useful in function arguments.

### **Example: Using `const` Reference**
```cpp
#include <iostream>

void display(const int &x) {
    // x = x + 1; ❌ Error: Cannot modify a const reference
    std::cout << "Value: " << x << std::endl;
}

int main() {
    int num = 100;
    display(num);  // Safe, num is not modified
    return 0;
}
```
---

## **8. References in Arrays**
### **Reference to an Array**
```cpp
#include <iostream>

int main() {
    int arr[3] = {10, 20, 30};
    int (&refArr)[3] = arr;  // Reference to an array

    refArr[1] = 99;  // Modifies arr[1]

    std::cout << "arr[1] = " << arr[1] << std::endl;
    return 0;
}
```
### **Output:**
```
arr[1] = 99
```

---

## **9. References to Pointers**
A reference can be used with pointers to modify the pointer itself.

```cpp
#include <iostream>

void modifyPointer(int* &ptr) {  // Reference to a pointer
    static int y = 20;
    ptr = &y;
}

int main() {
    int x = 10;
    int* p = &x;

    modifyPointer(p);  // p now points to y

    std::cout << "Value pointed by p: " << *p << std::endl;
    return 0;
}
```
### **Output:**
```
Value pointed by p: 20
```
---

## **10. Practical Uses of References**
1. **Avoiding unnecessary copies (especially for large objects).**
2. **Modifying function arguments directly.**
3. **Returning references from functions for efficiency.**
4. **Using `const` references to prevent modification in functions.**

---
