# Memory Layout

## 1. Text Segment
- The text segment (also known as code segment) is where the executable code of the program is stored. 
- It contains the compiled machine code of the program’s functions and instructions. This segment is usually read-only and stored in the lower parts of the memory to prevent accidental modification of the code while the program is running.
- The size of the text segment is determined by the number of instructions and the complexity of the program.


## 2. Data Segment
- The data segment stores global and static variables that are created by the programmer. It is present just above the code segment of the program. It can be further divided into two parts:

### A. Initialized Data Segment
- As the name suggests, it is the part of the data segment that contains global and static variables that have been initialized by the programmer. For example,

```txt
int a = 10;
static int b = 20;
```

The above variables a and b will be stored in the Initialized Data Segment.

### B. Uninitialized Data Segment (BSS)
Uninitialized data segment often called the “bss” segment, named after an ancient assembler operator, that stood for “Block Started by Symbol” contains global and static variables that are not initialized by the programmer. These variables are automatically initialized to zero at runtime by the operating system. For example, the below shown variables will be stored in this segment:

```txt
    int a;
    static int b;
```

## 3. Heap Segment
- Heap segment is where dynamic memory allocation usually takes place. The heap area begins at the end of the BSS segment and grows towards the larger addresses from there. - It is managed by functions such as malloc(), realloc(), and free() which in turn may use the brk and sbrk system calls to adjust its size.

- The heap segment is shared by all shared libraries and dynamically loaded modules in a process. For example, the variable pointed by ptr will be stored in the heap segment:

```txt
int *ptr = (int*) malloc(sizeof(int) * 10); 
```

## 4. Stack Segment
- The stack is a region of memory used for local variables and function call management. 
- Each time a function is called, a stack frame is created to store local variables, function parameters, and return addresses. This stack frame is stored in this segment.

- The stack segment is generally located in the higher addresses of the memory and grows opposite to heap. 
- They adjoin each other so when stack and heap pointer meet, free memory of the program is said to be exhausted.

Example of data stored in stack segment:
```cpp
void function() {
    int local_var = 10;  // Stored in the stack
}
```


```c
#include <stdio.h>
#include <stdlib.h>

// Global variable
int gvar = 66;

// Constant global variable
const int cgvar = 1010;

// uninitialized global variable
int ugvar;

void foo() {
    
    // Local variable
    int lvar = 1;
    printf("Address of lvar:\t%p", (void*)&lvar);
}

int main() {
    
    // Heap variable
    int *hvar = (int*)malloc(sizeof(int));
    
    
    // Checking and comparing address of different
    // elements of program that should be stored in
    // different segements of the memory
    printf("Address of foo:\t\t%p\n", (void*)&foo);
    printf("Address of cgvar:\t%p\n", (void*)&cgvar);
    printf("Address of gvar:\t%p\n", (void*)&gvar);
    printf("Address of ugvar:\t%p\n", (void*)&ugvar);
    printf("Address of hvar:\t%p\n", (void*)hvar);
    foo();
    
    return 0;
}
```