# Friend

## FriendShip
- FrinedShip is one way relationship

### 1. Global Function as Friend
### 2. Member Function as Friend
### 3. Whole Class as Friend


### 1. Global Function as Friend

Friend function can be granted special access to private and protected members of a class in C++. They are not the member functions of the class but can access and manipulate the private and protected members of that class for they are declared as friends.

#### Syntax
```cpp
friend return_type function_name (arguments);    // for a global function
```

#### Example
```cpp
#include <iostream>
using namespace std;

class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }
    
      // friend function declaration
    friend void friendFunction(base& obj);
};


// friend function definition
void friendFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

int main()
{
    base object1;
    friendFunction(object1);

    return 0;
}
```


### 2. Member Function of Another Class as Friend Function

```cpp
#include <iostream>
using namespace std;

class base; // forward definition needed
// another class in which function is declared

class anotherClass {
public:
    void memberFunction(base& obj);
};

// base class for which friend is declared
class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend function declaration
    friend void anotherClass::memberFunction(base&);
};

// friend function definition
void anotherClass::memberFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

int main()
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);

    return 0;
}

```



### 3. Whole Class as Friend

A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow a particular class to access private and protected members of other classes. For example, a LinkedList class may be allowed to access private members of Node.

```cpp
// C++ Program to demonstrate the
// functioning of a friend class
#include <iostream>
using namespace std;

class G {
private:
    int private_variable;

protected:6
    int protected_variable;

public:
    G()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend class declaration
    friend class F;
};

// Here, class F is declared as a
// friend inside class G. Therefore,
// F is a friend of class G. Class F
// can access the private members of
// class G.
class F {
public:
    void display(G& t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};

// Driver code
int main()
{
    G g;
    F fri;
    fri.display(g);
    return 0;
}

```

### Advantages of Friend Functions
- A friend function is able to access members without the need of inheriting the class.
- The friend function acts as a bridge between two classes by accessing their private data.
- It can be used to increase the versatility of overloaded operators.
- It can be declared either in the public or private or protected part of the class.

### Disadvantages of Friend Functions
- Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
- Friend functions cannot do any run-time polymorphism in their members.


### Important Points 
- Friends should be used only for limited purposes. Too many functions or external classes are declared as friends of a class with protected or private data access lessens the value of encapsulation of separate classes in object-oriented programming.
- Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
- Friendship is not inherited. 
- The concept of friends is not in Java.



```cpp


// 01 Naked / Global Function as Friend

#include <iostream>
using namespace std;

class Demo
{
private:
  int no1;

protected:
  int no3;

  friend void fun2(); // friend declaration

public:
  int no2;

  Demo()
  {
    no1 = 10;
    no2 = 20;
    no3 = 30;
  }
};

// global fun1 function definiton
void fun1()
{
  Demo obj;

  // cout << "obj no1 =" << obj.no1 << endl; // error
  cout << "obj no2 =" << obj.no2 << endl; // allowed
  // cout << "obj no3 =" << obj.no3 << endl; // error
}

// global fun2 function definiton
void fun2()
{
  Demo obj;

  cout << "obj no1 =" << obj.no1 << endl; // allowed
  cout << "obj no2 =" << obj.no2 << endl; // allowed
  cout << "obj no3 =" << obj.no3 << endl; // allowed
}

int main()
{
  fun1();
  fun2();

  return 0;
}
```



```cpp
// 02 Member Function as Friend

#include <iostream>
using namespace std;

// Forward declaration
class Demo2
{
public:
  void fun1();
  void fun2();
};

class Demo1
{

private:
  int no1;

  friend void Demo2::fun2(); // friend declaration;

public:
  Demo1()
  {
    no1 = 10;
  }
};

// Demo2
// member function definition

void Demo2::fun1()
{
  cout << "In Demo2 fun1" << endl;
  Demo1 obj;
  // cout << "obj no1  = " << obj.no1 << endl; // error
  cout << "Out Demo2 fun1" << endl;
}

void Demo2::fun2()
{
  cout << "In Demo2 fun2" << endl;
  Demo1 obj;
  cout << "obj no1  = " << obj.no1 << endl; // allowed
  cout << "Out Demo2 fun2" << endl;
}

int main()
{
  Demo2 obj2;
  obj2.fun1();
  obj2.fun2();
  return 0;
}
```


```cpp
// 03 Whole class as friend

#include <iostream>
using namespace std;

class Demo2; // Froward Declaration

class Demo1
{
private:
  int no1;

protected:
  int no2;

public:
  Demo1()
  {
    no1 = 10;
    no2 = 20;
  }

  friend class Demo2; // friend declaration
};

class Demo2
{
public:
  void Display()
  {
    Demo1 obj;
    cout << "obj no1 = " << obj.no1 << endl; // 10
    cout << "obj no2 = " << obj.no2 << endl; // 20
  }
};

int main()
{
  Demo2 obj2;
  obj2.Display();

  return 0;
}
```