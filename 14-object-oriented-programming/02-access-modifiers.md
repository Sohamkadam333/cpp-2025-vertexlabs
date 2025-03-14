# Access Modifiers

Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding. 

There are 3 types of access modifiers available in C++: 

- Public
- Private
- Protected

```txt
If we do not specify any access modifiers for the members inside the class, then by default the access modifier for the members will be Private.
```

### 1. Public:
All the class members declared under the public specifier will be available to everyone. The data members and member functions declared as public can be accessed by other classes and functions too. The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 

```cpp
#include<iostream>
using namespace std;

// class definition
class Demo
{
    public: 
        int m_A;
        
        double  increment()
        {
            m_A++;
            return m_A;
        }
    
};

// main function
int main()
{
    Demo obj;
    
    // accessing public datamember outside class
    obj.m_A = 1;
    
    cout << "m_A is: " << obj.m_A << "\n";
    cout << "increment m_A is: " << obj.increment();
    return 0;
}
```


### 2. Private: 
The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or the friend functions/ friend class are allowed to access the private data members of the class. 

```cpp
#include<iostream>
using namespace std;

// class definition
class Demo
{
  private:
    int m_A;
  
  public: 
        double  increment()
        {
            m_A++;
            return m_A;
        }
    
};

// main function
int main()
{
    Demo obj;
    
    // accessing private data member outside class
    obj.m_A = 1;  // error
    
    cout << "increment m_A is: " << obj.increment();
    return 0;
}
```


### Getter and Setter

```cpp
#include<iostream>
using namespace std;

// class definition
class Demo
{
  private:
    int m_A;
        
    public: 
        double  increment()
        {
            m_A++;
            return m_A;
        }

        void setA(int a)
        {
          m_A = a;
        }

        int getA()
        {
          return m_A;
        }
    
};

// main function
int main()
{
    Demo obj;

    obj.setA(10);
    
    cout << "increment m_A is: " << obj.increment()<<endl;

    cout<<obj.getA()<<endl;
    return 0;
}
```


### 3. Protected: 
The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well. 

```cpp
// C++ program to demonstrate
// protected access modifier
#include <bits/stdc++.h>
using namespace std;

// base class
class Base
{   
    // protected data members
    protected:
    int m_A;
   
};

// sub class or derived class from public base class
class Derived : public Base
{
    public:
    void setA(int a)
    {
        
        // Child class is able to access the inherited 
        // protected data members of base class
        
        m_A = a;
        
    }
    
    void displayA()
    {
        cout << "a is: " << m_A << endl;
    }
};

// main function
int main() {
    
    Derived dObj1;
    
    // member function of the derived class can
    // access the protected data members of the base class
    
    dObj1.setA(81);
    dObj1.displayA();
    return 0;
}

```