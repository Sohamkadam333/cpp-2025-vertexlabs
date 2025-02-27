# C vs C++ Structures

```c
#include <stdio.h>

struct Demo{
  int iNo1;
  int iNo2;

  // In C you cannot write functions inside structure
  // Error
  int add()
  {
    return a + b;
  }

  void print()
  {
    printf("iNo1 = %d\n",iNo1);
    printf("iNo2 = %d\n",iNo2);
  }

  void scan()
  {
    scanf("%d",&iNo1);
    scanf("%d",&iNo2);
  }
};


int main(void)
{
  struct Demo d1;

  return 0;
}
```


```cpp
#include <iostream>
using namespace std;

struct Demo{

// By default every member of structure is public

private:

// Data Members
  int iNo1;
  int iNo2;

public:

// Member Functions
  int add()
  {
    return a + b;
  }

  void print()
  {
   cout<<"iNo1 = "<<iNo1<<endl;
   cout<<"iNo2 = "<<iNo2<<endl;
  }

  void scan()
  {
    cin>>iNo1>>iNo2;
  }
};


int main(void)
{
  struct Demo d1;

  d1.scan();
  d1.print();
  cout<<d1.add()<<endl;
  return 0;
}
```