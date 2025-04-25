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