# Classes and Objects

### What is a Class in C++?

A class is keyword which is used to make a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.

For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.

A Class is a user-defined data type that has data members and member functions.
Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behaviour of the objects in a Class.
In the above example of class Car, the data member will be speed limit, mileage, etc, and member functions can be applying brakes, increasing speed, etc.
But we cannot use the class as it is. We first have to create an object of the class to use its features. An Object is an instance of a Class.

```txt
Note: When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
```

```cpp
class ThisClass {
     public:      // access specifier
     int var;     // data member
     void print() {           // member function
          cout << "Hello";
      }
};
```


### What is an Object in C++?
When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.

```cpp
ThisClass obj;
```


### Example of Class and Object

```cpp
// C++ program to illustrate how create a simple class and
// object
#include <iostream>
#include <string>

using namespace std;

// Define a class named 'Person'
class Person {
public:
    // Data members
    string name;
    int age;

    // Member function to introduce the person
    void introduce()
    {
        cout << "Hi, my name is " << name << " and I am "
             << age << " years old." << endl;
    }
};

int main()
{
    // Create an object of the Person class
    Person person1;

    // accessing data members
    person1.name = "Alice";
    person1.age = 30;

    // Call the introduce member method
    person1.introduce();

    return 0;
}
```