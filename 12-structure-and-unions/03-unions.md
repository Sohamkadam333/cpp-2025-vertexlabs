# Unions

In C++, a union is a user-defined datatype in which we can define members of different types of data types just like structures. But one thing that makes it different from structures is that the member variables in a union share the same memory location, unlike a structure that allocates memory separately for each member variable. The size of the union is equal to the size of the largest data type.

Memory space can be used by one member variable at one point in time, which means if we assign value to one member variable, it will automatically deallocate the other member variable stored in the memory which will lead to loss of data.

### Need of Union in C++

- When the available memory is limited, it can be used to achieve memory efficiency.
- It is used to encapsulate different types of data members.
- It helps in optimizing the performance of applications.


```cpp

#include <iostream> 
using namespace std; 
  
// Creating a union 
union geek { 
    int age; 
    char grade; 
    float GPA; 
}; 
  
int main() 
{ 
  
    // Defining a union variable 
    union geek student1; 
  
    // Assigning values to data member of union geek and 
    // printing the values of data members 
    student1.age = 25; 
    cout << "Age : " << student1.age << endl; 
  
    student1.grade = 'B'; 
    cout << "Grade : " << student1.grade << endl; 
  
    student1.GPA = 4.5; 
    cout << "GPA : " << student1.GPA << endl; 
  
    return 0; 
}
```


### Data Members of Union Share Same Memory Location

```cpp
#include <iostream> 
using namespace std; 
  
// Creating a union 
union geek { 
    int age; 
    float GPA; 
    double marks; 
}; 
  
int main() 
{ 
  
    // Defining a union variable. 
    geek student1; 
  
    cout << "Memory address of age: " << &student1.age 
         << endl; 
    cout << "Memory address of GPA: " << &student1.GPA 
         << endl; 
    cout << "Memory address of marks: " << &student1.marks 
         << endl; 
  
    cout << "Size of a union: " << sizeof(student1) << endl; 
  
    return 0; 
}
```