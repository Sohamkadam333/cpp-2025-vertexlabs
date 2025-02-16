# Multidimensional Array

An array is a type of data structure used to store the collection of the same data type items held at contiguous memory locations. Arrays can be one-dimensional or multidimensional based on the number of directions in which the array can grow.

### What is Multidimensional Array in C++?

A multidimensional array is an array with more than one dimension. It is the homogeneous collection of items where each element is accessed using multiple indices.


```cpp
// c++ program to illustrate the two dimensional array
#include <iostream>
using namespace std;

int main()
{

    int count = 1;
  
    // Declaring 2D array
    int array1[3][4];

    // Initialize 2D array using loop
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            array1[i][j] = count;
            count++;
        }
    }

    // Printing the element of 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```


```cpp
// C++ program to illustrate the 3d array
#include <iostream>
using namespace std;

int main()
{

    int count = 0;
    // declaring 3d array
    int x[2][2][3];

    // initializing the array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                x[i][j][k] = count;
                count++;
            }
        }
    }

    // printing the array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                printf("x[%d][%d][%d] = %d \n", i, j, k,
                       x[i][j][k]);
                count++;
            }
        }
    }

    return 0;
}
```