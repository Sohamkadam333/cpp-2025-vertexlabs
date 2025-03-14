// using namespace std;
using std::cin;
using std::cout;
using std::endl;

class Base
{

  //{
  int no1;
  int no2;
  //}

  // int no4;

protected:
  int no3;

public:
  int no4;
  Base()
  {
    cout << "In Default Constructor" << endl;
    no1 = 0;
    no2 = 0;
    no3 = 0;
  }

  Base(int param1, int param2, int param3)
  {
    cout << "In Parameterised Constructor" << endl;
    no1 = 0;
    no2 = 0;
    no3 = 0;
  }

  Base(Base &refObj)
  {
    cout << "In Copy Constructor" << endl;
    no1 = refObj.no1;
    no2 = refObj.no2;
    no3 = refObj.no3;
  }

private:
  int add()
  {
    return no1 + no2 + no3;
  }

public:
  int getAddResult()
  {
    return add();
  }

  // setter / mutator
  void setNo1(int n)
  {
    no1 = n;
  }

  void setNo2(int no2);

  // getter / accessor
  int getNo1()
  {
    return no1;
  }

  int getNo2();
};