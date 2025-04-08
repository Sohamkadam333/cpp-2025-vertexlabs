// 01 Stack
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void greet()
{
  string name = "Soham";
  cout << "size of name = " << sizeof(name) << endl;
  cout << "Hello " << name << endl;
}

void add(int param1, int param2)
{
  int result = param1 + param2;
  cout << "Addition = " << result << endl;

  greet();
}

int main(void)
{
  int a = 10;
  int b = 20;

  add(30, 40);

  return 0;
}