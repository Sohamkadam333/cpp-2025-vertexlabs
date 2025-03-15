#include <iostream>
#include "Test.h"

void Base::setNo2(int no2)
{
  this->no2 = no2;
}

int Base::getNo2()
{
  return no2;
}

int main(void)
{

  struct Base obj1;

  cout << "size = " << sizeof(obj1) << endl;

  // obj1.no1 = 10;

  obj1.setNo1(10);
  cout << "no1 = " << obj1.getNo1() << endl;
  cout << "Add res = " << obj1.getAddResult();

  // struct Base obj2(10, 20, 30);
  // struct Base obj3(obj2);

  return 0;
}