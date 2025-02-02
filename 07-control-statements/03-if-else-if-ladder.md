# if else if Ladder

#### In C++, the if-else-if ladder helps the user decide from among multiple options. The C++ if statements are executed from the top down. As soon as one of the conditions controlling the if is true, the statement associated with that if is executed, and the rest of the C++ else-if ladder is bypassed. If none of the conditions is true, then the final statement will be executed.

```cpp
#include <iostream> 
using namespace std; 
  
int main()  { 
    int i = 20;
  
    // If - else ladder
    if (i == 10) 
        cout << "i is 10"; 
    else if (i == 15) 
        cout << "i is 15"; 
    else if (i == 20) 
        cout << "i is 20"; 
    else
        cout << "i is not present"; 
  
    return 0; 
}
```


### Print the day name using day number
```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 4;

    // Determine the day name using if-else if ladder
    if (day == 1) {
        cout << "Monday";
    } else if (day == 2) {
        cout << "Tuesday";
    } else if (day == 3) {
        cout << "Wednesday";
    } else if (day == 4) {
        cout << "Thursday";
    } else if (day == 5) {
        cout << "Friday";
    } else if (day == 6) {
        cout << "Saturday";
    } else if (day == 7) {
        cout << "Sunday";
    } else {
        cout << "Invalid day number";
    }

    return 0;
}
```
