#include <iostream>
#include <stdexcept>
using namespace std;

class MyCustomException : public exception
{
public:
  const char *what() const noexcept override
  {
    return "Custom exception occurred";
  }
};

void riskyFunction()
{
  throw MyCustomException();
}

int main()
{
  try
  {
    riskyFunction();
  }
  catch (const MyCustomException &e)
  {
    std::cout << "Caught: " << e.what() << std::endl;
  }
  return 0;
}