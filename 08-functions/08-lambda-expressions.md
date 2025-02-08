# Lambda expression

#### C++ 11 introduced lambda expressions to allow inline functions which can be used for short snippets of code that are not going to be reused and therefore do not require a name. In their simplest form a lambda expression can be defined as follows: 

```cpp
[ capture clause ] (parameters) -> return-type  
{   
   definition of method   
} 
```

- [] is called the lambda introducer which denotes the start of the lambda expression
- () is called the parameter list which is similar to the () operator of a normal function

#### Generally, the return-type in lambda expressions is evaluated by the compiler itself and we don’t need to specify it explicitly. Also the -> return-type part can be ignored.  However, in some complex cases e.g. conditional statements, the compiler can’t determine the return type and explicit specification is required. 

```cpp
void greet()
{
  cout <<"Hello World\n";
}
```

```cpp
auto greet = []() {
  cout <<"Hello World\n";
};
```


```cpp
#include <iostream>
using namespace std;

int main() {

  // lambda function that takes two integer
  //  parameters and displays their sum
  auto add = [] (int a, int b) {
   cout << "Sum = " << a + b;
  };

  // call the lambda function
  add(100, 78);

  return 0;
}
```


```cpp
#include<iostream>
using namespace std;

int main() {

  // lambda function with explicit return type 'double'
  // returns the sum or the average depending on operation
  auto operation = []  (int a, int b,  string op) -> double {
    if (op == "sum") {
      return a + b;
    }
    else {
      return (a + b) / 2.0;
    }
  };

  int num1 = 1;
  int num2 = 2;

  // find the sum of num1 and num2
  auto sum = operation(num1, num2, "sum"); 
  cout << "Sum = " << sum << endl;

  // find the average of num1 and num2
  auto avg = operation(num1, num2, "avg"); 
  cout << "Average = " << avg;

  return 0;
}
```

### C++ Lambda Function Capture Clause

#### By default, lambda functions cannot access variables of the enclosing function. In order to access those variables, we use the capture clause.

### 1. Capture by Value
This is similar to calling a function by value. Here, the actual value is copied when the lambda is created.

```cpp
#include<iostream>
using namespace std;

int main() {

  int initial_sum = 100;

  // capture initial_sum by value
  auto add_to_sum = [initial_sum] (int num) {
    // here inital_sum = 100 from local scope
    return initial_sum + num;
  };

  int final_sum = add_to_sum(78);
  cout << "100 + 78 = " << final_sum;

  return 0;
}
```

### 2. Capture by Reference
This is similar to calling a function by reference i.e. the lambda has access to the variable address.

```cpp
#include <iostream>
using namespace std;

int main() {

  int num = 0;

  cout << "Initially, num = " << num << endl;
  
  // [&num] captures num by reference
  auto increment_by_one = [&num] () {
    cout << "Incrementing num by 1.\n";
    num++;
  };

  // invoke lambda function
  increment_by_one();

  cout << "Now, num = " << num << endl;

  return 0;
}
```


### Lambda Function as Argument in STL Algorithm

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  // initialize vector of integers
  vector<int> nums = {1, 2, 3, 4, 5, 8, 10, 12};

  int even_count = count_if(nums.begin(), nums.end(), [](int num) {
    return num % 2 == 0;
  });

  cout << "There are " << even_count << " even numbers.";

  return 0;
}
```