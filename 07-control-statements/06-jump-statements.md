# Jump statements

#### Jump statements are used to manipulate the flow of the program if some conditions are met. It is used to terminate or continue the loop inside a program or to stop the execution of a function.

- continue Statement
- break Statement
- return Statement
- goto Statement

## continue Statement

#### The C++ continue statement is used to execute other parts of the loop while skipping some parts declared inside the condition, rather than terminating the loop, it continues to execute the next iteration of the same loop. It is used with a decision-making statement which must be present inside the loop.

#### This statement can be used inside for loop or while or do-while loop.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i < 10; i++) {

          // Skip the execution for i = 5
        if (i == 5)
            continue;
        cout << i << " ";
    }
    return 0;
}
```


## break Statement

#### The C++ break statement is used to terminate the whole loop if the condition is met. It is used with decision-making statements such as if, if-else, or switch statement to break out of the block. It forces the loop to stop the execution of the further iteration.

```cpp
#include <iostream>
using namespace std;

int main() {
  
      // Loop to print digits from 1 to 4
    for (int i = 1; i < 10; i++) {

        // Breaking Condition
        if (i == 5)
            break;
        cout << i << " ";
    }
  
    return 0;
}
```

## return Statement

#### The return statement takes control out of the function itself. It is stronger than a break. It is used to terminate the entire function after the execution of the function or after some condition. Every function has a return statement with some returning value except the void() function. Although void() function can also have the return statement to end the execution of the function.

```cpp
#include <iostream>
using namespace std;

void findNum (int n) {

  cout << "Number in Range [0, 100]";
              
  // This will stop the function here
  return;
      
  // Final return if the above one is not reached.
  return;
}

int main() {
    int n = 10;

      // Caaling the function
    findNum(n);

    return 0;
}
```

## goto Statement

#### The C++ goto statement is used to jump directly to that part of the program to which it is being called.  Every goto statement is associated with the label which takes them to part of the program for which they are called. The label statements can be written anywhere in the program it is not necessary to use them before or after the goto statement.


```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    if (n % 2 == 0) {
      
          // Skipping to label1
        goto label1;
    }
    else {
      
          // Skipping to label2
        goto label2;
    }

label1:
    cout << "Even" << endl;
    return 0;

label2:
    cout << "Odd" << endl;
    return 0;
label3:
    cout << "Unspecified";
    return 0;
}
```