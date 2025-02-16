# Pointer to an Array | Array Pointer

A pointer to an array is a pointer that points to the whole array instead of the first element of the array. It considers the whole array as a single unit instead of it being a collection of given elements.

```cpp
#include<stdio.h>

int main() {
  int arr[5] = { 1, 2, 3, 4, 5 };
  int *ptr = arr;

  printf("%p\n", ptr);
  return 0;
}
```

### Access Array Using Pointer to an Array

```cpp
#include <stdio.h>

int main() {
    int arr[3] = { 5, 10, 15 };    
      int n = sizeof(arr) / sizeof(arr[0]);

    // Declare pointer variable
    int (*ptr)[3];

    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr = &arr;
    
      for (int i = 0; i < n; i++)
        printf("%d ", (*ptr)[i]);

    return 0;
}
```


### Pointer to the First Element of Array vs Pointer to Array
```cpp
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Create a pointer to integer
    int *p1;

    // Pointer to an array of 5 integers
    int(*p2)[5];

    // Points to 0th element of the arr
    p1 = arr;

    // Points to the whole array arr
    p2 = &arr;
  
      printf("p1 = %p\n", p1);
      printf("*p2 = %p\n\n", *p2);
  
      // incrementing both pointers
    p1++;
    p2++;
    printf("p1 = %p\n", p1);
      printf("*p2 = %p", *p2);

    return 0;
}
```


### Pointer to Multidimensional Arrays

```cpp
#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3},
                    {4, 5, 6}};
  
      // pointer to above array
      int (*ptr)[2][3] = &arr;

      // Traversing the arry using ptr
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
                printf("%d ", (*ptr)[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```


### Pointers to 3D Arrays

```cpp
#include <stdio.h>

int main() {
    int arr[2][3][2] = {{{1, 2}, {3, 4}, {5, 6}},
                       {{7, 8}, {9, 10}, {11, 12}}};

    // Pointer to the 3D array
    int (*ptr)[2][3][2] = &arr;

    // Traversing the 3D array using the pointer
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", (*ptr)[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
```