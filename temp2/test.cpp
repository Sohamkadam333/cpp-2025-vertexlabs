// Access Specifier
/*
1. public
2. protected
3. private
*/

#include <iostream>
using namespace std;
class Demo
{
public:
  int no1;
  void pubDisplay()
  {
    cout << "In pubDisplay" << endl;
  }

protected:
  int no2;
  void proDisplay()
  {
    cout << "In proDisplay" << endl;
  }

private:
  int no3;
  void priDisplay()
  {
    cout << "In priDisplay" << endl;
  }
};

int main()
{
  cout << "In main" << endl;

  Demo obj;
  obj.pubDisplay();
  // obj.proDisplay(); // error: 'void Demo::proDisplay()' is protected within this context
  // obj.priDisplay(); error: 'void Demo::priDisplay()' is private within this context

  cout << "Out main" << endl;

  return 0;
}

// ----------------------------------------------------------------------------------

/*
#include <iostream>
using namespace std;

class Demo
{
public:
int no1;
  int no2;

  Demo()
  {
    cout << "In default constructor" << endl;
    no1 = 10;
    no2 = 20;
    cout << "Out default constructor" << endl;
  }

  ~Demo()
  {
    cout << "In destructor" << endl;
    cout << "Out destructor" << endl;
  }

  void Display()
  {
    cout << "no1 = " << no1 << endl;
    cout << "no2 = " << no2 << endl;
  }
};

int main()
{
  cout << "In main" << endl;

  // Demo obj;
  // Demo *obj = new Demo;
  Demo *obj = (Demo *)malloc(sizeof(Demo));
  cout << "size of obj = " << sizeof(obj) << endl;

  obj->Display();

  obj->no1 = 10;
  obj->no2 = 20;

  obj->Display();

  // delete obj;
  free(obj);

  cout << "Out main" << endl;
  return 0;
}

*/