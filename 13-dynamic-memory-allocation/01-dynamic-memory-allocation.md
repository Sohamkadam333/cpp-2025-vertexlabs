# Dynamic Memory Allocation in C using malloc(), calloc(), free() and realloc()

In C, a variable defined in a function is stored in the stack memory. The requirement of this memory is that it needs to know the size of the data to memory at compile time (before the program runs). Also, once defined, we can neither change the size nor completely delete the memory.

To resolve this, C provides a feature called Dynamic Memory Allocation. It allows you to allocate memory at runtime, giving your program the ability to handle data of varying sizes. Dynamic resources are stored in the heap memory instead of the stack.

This feature is useful in a variety of situations. For example, changing the size of an array according to our requirement.

### Need of Dynamic Memory Allocation

As we know, the size of an array in C is fixed and should be known at compile time. There can be two problems:

The size of the array is not sufficient to store all the elements. To resolve this, one might set the size to store the maximum theoretically possible elements. This creates another problem.

This size of the array is much more than what is required to store the elements. This leads to the wastage of memory.

This is where the dynamic memory allocation comes in. The size of the array can be increased if more elements are to be inserted and decreased of less elements are inserted. Moreover, there is no need to estimate the max possible size. The size can be decided at runtime according to the requirement.

### Dynamic Memory Allocation in C
Dynamic memory allocation is possible in C by using 4 library functions provided by <stdlib.h> library:

- malloc()
- calloc()
- free()
- realloc()

#### malloc()
The malloc() (stands for memory allocation) function is used to allocate a single block of contiguous memory on the heap at runtime. The memory allocated by malloc() is uninitialized, meaning it contains garbage values.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 5);
    
    // Checking if failed or pass
    if (ptr == NULL) {
        printf("Allocation Failed");
        exit(0);
    }
    
    // Populate the array
    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;
        
    // Print the array
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
    return 0;
}

```

### calloc()
The calloc() (stands for contiguous allocation) function is similar to malloc(), but it initializes the allocated memory to zero. It is used when you need memory with default zero values.

This function also returns a void pointer to the allocated memory that is converted to the pointer of required type to be usable. If allocation fails, it returns NULL pointer.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)calloc(sizeof(int), 5);
    
    // Checking if failed or pass
    if (ptr == NULL) {
        printf("Allocation Failed");
        exit(0);
    }
    
    // No need to populate as already
    // initialized to 0
        
    // Print the array
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
    return 0;
}

```


### free()
The memory allocated using functions malloc() and calloc() is not de-allocated on their own. The free() function is used to release dynamically allocated memory back to the operating system. It is essential to free memory that is no longer needed to avoid memory leaks.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)calloc(sizeof(int), 5);
    
    // Do some operations.....
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
        
    // Free the memory after completing
    // operations
    free(ptr);
    ptr = NULL;
    
    return 0;
}

```


### realloc()
realloc() function is used to resize a previously allocated memory block. It allows you to change the size of an existing memory allocation without needing to free the old memory and allocate a new block.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // Initially allocate memory for 5 integers
    int *ptr = (int *)malloc(5 * sizeof(int));
    
    // Check if allocation was successful
    if (ptr == NULL) {
        printf("Memory Allocation Failed
");
        exit(0);
    }
    
    // Now, we need to store 8 elements so
    // Reallocate to store 8 integers
    ptr = (int *)realloc(ptr, 8 * sizeof(int)); 
    
    // Check if reallocation was successful
    if (ptr == NULL) {
        printf("Memory Reallocation Failed
");
        exit(0);
    }
    
    // Assume we only use 5 elements now
    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }
    
    // Shrink the array back to 5 elements
    ptr = (int *)realloc(ptr, 5 * sizeof(int));
    
    // Check if shrinking was successful
    if (ptr == NULL) {
        printf("Memory Reallocation Failed
");
        exit(0);
    }
    
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
    
    // Finally, free the memory when done
    free(ptr);
    
    return 0;
}

```


## Issues Assciated with Dynamic Memory Allocation
As useful as dynamic memory allocation is, it is also prone to errors that requires careful handling to avoid the high memory usage or even system crashes. Few of the common errors are given below:

- Memory Leaks: Failing to free dynamically allocated memory leads to memory leaks, exhausting system resources.
- Dangling Pointers: Using a pointer after freeing its memory can cause undefined behavior or crashes.
- Fragmentation: Repeated allocations and deallocations can fragment memory, causing inefficient use of heap space.
- Allocation Failures: If memory allocation fails, the program may crash unless the error is handled properly.