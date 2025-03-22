# Encapsulation

## Encapsulation is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming, encapsulation is defined as binding together the data and the functions that manipulate them.

Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc. Now,

The finance section handles all the financial transactions and keeps records of all the data related to finance. All the financial processes are done by this section.
Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.


#### Encapsulation in C++
In C++, OOPs encapsulation is implemented using classes and access specifiers that keeps the data, and the manipulating methods enclosed inside a single unit. The direct advantage of this packaging is that only the required components are visible to the user, and other information is hidden.


```cpp
#include <iostream>
using namespace std;

// Class that represents a person
class Person {
    
    // private members that will be hidden
    int socialID;
    string name;
public:

    // public members that are accessible
    Person(string n, int id) {
        name = n;
        socialID = id;
    }
    string getName() {
        return name;
    }
    bool validateID() {
        if (socialID <= 1001 && socialID >= 0)
            return true;
        else
            return false;
    }
};

int main() {
    
    Person p1("Shubham", 503);
    
    if (!p1.validateID()) 
        cout << "Invalid SocialID";
    
    cout << p1.getName();
    return 0;
}
```


### Advantages

- Modularity: Encapsulation promotes modularity by organizing code into separate objects that handle specific tasks, making the program more structured and easier to manage.
- Code Maintenance: Encapsulation helps in maintaining and updating the code more easily.
- Improved Security: By hiding data and restricting unauthorized access to it, encapsulation improves the security of the program.
- Decoupling: It helps in reducing the dependency between components of a system, allowing them to function independently and making the system easier to maintain and extend.
- Facilitates Implementation of Other OOP Features: It also makes it possible to implement other OOPs features such as polymorphism, inheritance, abstraction, etc.


### Encapsulation and Abstraction
Encapsulation also leads to abstraction. Abstraction can be viewed as showing only the important information and ignoring the unimportant details and its internal working. In a class, public members functions are provided to the user without telling him/her about how it is implemented. That data remains hidden.