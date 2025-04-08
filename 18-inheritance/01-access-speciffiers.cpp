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