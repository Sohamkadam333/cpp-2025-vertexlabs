### `NULL` vs `nullptr` in C++

In C++, `NULL` and `nullptr` are both used to represent null pointer values, but they have key differences in terms of type safety and behavior. Let's break it down.

---

## **1. `NULL` (Legacy C-style Null Pointer)**
- `NULL` is a macro that is typically defined as `0` in C and C++.
- In C++, `NULL` is an integer constant with the value `0`, which can sometimes lead to ambiguous behavior.
- Since `NULL` is an integer literal (`#define NULL 0`), it can be implicitly converted to other types like `int`, which can cause unintended errors.

### **Example of `NULL`**
```cpp
#include <iostream>

void func(int x) { // Overload for integers
    std::cout << "Called func(int x): " << x << std::endl;
}

void func(char* ptr) { // Overload for pointers
    std::cout << "Called func(char* ptr)" << std::endl;
}

int main() {
    func(NULL); // Ambiguous: Calls func(int) instead of func(char*)
    return 0;
}
```
### **Output:**
```
Called func(int x): 0
```
**Issue:**  
- `NULL` is `0`, which is an integer.
- The compiler resolves `func(NULL)` to `func(int)` instead of `func(char*)`, which is an unintended behavior.

---

## **2. `nullptr` (Type-Safe Null Pointer - Introduced in C++11)**
- `nullptr` is a keyword in C++11 that represents a null pointer constant.
- Unlike `NULL`, `nullptr` has a dedicated type: `std::nullptr_t`, which prevents it from being implicitly converted to an integer.
- It resolves overload ambiguities by always being recognized as a pointer.

### **Example of `nullptr`**
```cpp
#include <iostream>

void func(int x) { // Overload for integers
    std::cout << "Called func(int x): " << x << std::endl;
}

void func(char* ptr) { // Overload for pointers
    std::cout << "Called func(char* ptr)" << std::endl;
}

int main() {
    func(nullptr); // Calls func(char*), as expected
    return 0;
}
```
### **Output:**
```
Called func(char* ptr)
```
**Why?**  
- `nullptr` is of type `std::nullptr_t`, so it correctly resolves to `func(char*)`, avoiding the ambiguity seen with `NULL`.

---

## **3. Key Differences Between `NULL` and `nullptr`**
| Feature                  | `NULL`                                         | `nullptr`                           |
| ------------------------ | ---------------------------------------------- | ----------------------------------- |
| **Definition**           | Typically `#define NULL 0`                     | Keyword in C++11                    |
| **Type**                 | `int` (or `long` in some cases)                | `std::nullptr_t`                    |
| **Implicit Conversion**  | Can be converted to `int`, `bool`, etc.        | Can only be used as a pointer       |
| **Overloading Behavior** | May cause ambiguity (chooses integer overload) | Always resolves to pointer overload |
| **Type Safety**          | Not type-safe, may cause unintended behavior   | Type-safe and unambiguous           |

---

## **4. When to Use `nullptr` Over `NULL`**
- Always prefer `nullptr` in modern C++ (C++11 and later) because:
  - It eliminates ambiguity in function overloads.
  - It is type-safe and cannot be mistakenly used as an integer.
  - It improves code clarity and reduces the risk of errors.

**Example (Safe Code with `nullptr`)**
```cpp
#include <iostream>

void printPointer(int* p) {
    if (p == nullptr) {
        std::cout << "Pointer is null" << std::endl;
    } else {
        std::cout << "Pointer points to: " << *p << std::endl;
    }
}

int main() {
    int* p = nullptr;  // Safe usage of null pointer
    printPointer(p);
    return 0;
}
```
### **Output:**
```
Pointer is null
```

---

## **5. Can `nullptr` Be Assigned to an Integer?**
No, `nullptr` cannot be assigned to an integer directly, unlike `NULL`.

### **Example (Error Case)**
```cpp
int x = nullptr; // ❌ Compilation error
```
**Error:**
```
error: cannot convert ‘std::nullptr_t’ to ‘int’ in initialization
```
This prevents accidental misuse.

---

## **6. Checking `nullptr` Type**
If you want to confirm that `nullptr` has a unique type, use `typeid`:

```cpp
#include <iostream>
#include <typeinfo>

int main() {
    std::cout << "Type of nullptr: " << typeid(nullptr).name() << std::endl;
    return 0;
}
```
### **Output:**
```
Type of nullptr: St9nullptr_t
```

---
