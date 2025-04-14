// Author: Soham Kadam
// Date: 12-04-2025

#include <iostream>
using namespace std;

class Demo
{

  static int totalObjectCreated;
  static int totalObjectAlive;

public:
  Demo()
  {
    totalObjectCreated++;
    totalObjectAlive++;
  }

  ~Demo()
  {
    totalObjectAlive--;
  }

  static void Display()
  {
    cout << "Total Object Created = " << totalObjectCreated << endl;
    cout << "Total Object Alive = " << totalObjectAlive << endl;
    cout << "------------------------------------------------" << endl;
  }
};

int Demo::totalObjectCreated = 0;
int Demo::totalObjectAlive = 0;

int main()
{
  Demo::Display();

  {
    Demo obj1;
  }
  Demo::Display();

  Demo obj2;
  Demo::Display();

  Demo *objPtr = new Demo[3];
  Demo::Display();

  delete[] objPtr;
  Demo::Display();

  return 0;
}

// OUTPUT
/*
Total Object Created = 0
Total Object Alive = 0
------------------------------------------------
Total Object Created = 1
Total Object Alive = 0
------------------------------------------------
Total Object Created = 2
Total Object Alive = 1
------------------------------------------------
Total Object Created = 5
Total Object Alive = 4
------------------------------------------------
Total Object Created = 5
Total Object Alive = 1
------------------------------------------------
*/
