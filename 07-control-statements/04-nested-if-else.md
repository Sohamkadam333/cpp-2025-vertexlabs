# Nested if-else Statement

#### Nested if-else statements are those statements in which there is an if statement inside another if else. We use nested if-else statements when we want to implement multilayer conditions (condition inside the condition inside the condition and so on). C++ allows any number of nesting levels.

```cpp
#include <iostream>
using namespace std;

int main() {
      int n = 6;
      
      // Outer if statement
      if (n % 2 == 0) {
      
          // Inner if statement
          if (n % 3 == 0) {
              cout << "Divisible by 2 and 3";
        }
          else {
              cout << "Divisible by 2 but not 3";
        }
      }
      else {
          cout << "Not Divisible by 2";
    }

    return 0;
}
```

#### Check if the Given Year is a Leap Year

```cpp
#include <iostream>
using namespace std;

int main() {
    int year = 2023;

      // Outer if-else statement to check divisiblity with 0
    if (year % 4 == 0) {
      
        // First nested if-else statement to check
          // divisiblity with 100
        if (year % 100 == 0) {
          
            // Second nested if-else statement to check
              // divisiblity with 400
            if (year % 400 == 0) {
                cout << year << " is a leap year.";
            }
            else {
                cout << year << " is not a leap year.";
            }
        }
        else {
            cout << year << " is a leap year.";
        }
    }
    else {
        cout << year << " is not a leap year.";
    }

    return 0;
}
```