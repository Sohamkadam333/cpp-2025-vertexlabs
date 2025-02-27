# Enumeration

Enumeration (Enumerated type) is a user-defined data type that can be assigned some limited values. These values are defined by the programmer at the time of declaring the enumerated type.

```cpp
enum enumerated-type-name
{
    value1, value2, value3…..valueN
};
```

The enum keyword is used to declare enumerated types after that enumerated type name was written then under curly brackets possible values are defined. After defining Enumerated type variables are created. 
Enumerators can be created in two types:-

- It can be declared during declaring enumerated types, just add the name of the variable before the semicolon. or,
- Besides this, we can create enumerated type variables as the same as the normal variables.


```cpp
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Defining enum Gender 
    enum Gender { Male, Female }; 
  
    // Creating Gender type variable 
    Gender gender = Male; 
  
    switch (gender) { 
    case Male: 
        cout << "Gender is Male"; 
        break; 
    case Female: 
        cout << "Gender is Female"; 
        break; 
    default: 
        cout << "Value can be Male or Female"; 
    } 
    return 0; 
}
```


```cpp
#include <bits/stdc++.h> 
using namespace std; 
  
// Defining enum Year 
enum year { 
    Jan, 
    Feb, 
    Mar, 
    Apr, 
    May, 
    Jun, 
    Jul, 
    Aug, 
    Sep, 
    Oct, 
    Nov, 
    Dec 
}; 
  
// Driver Code 
int main() 
{ 
    int i; 
  
    // Traversing the year enum 
    for (i = Jan; i <= Dec; i++) 
        cout << i << " "; 
  
    return 0; 
}
```