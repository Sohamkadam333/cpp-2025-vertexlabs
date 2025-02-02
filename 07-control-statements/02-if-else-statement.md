# if else Statement

#### The if else in C is an extension of the if statement which not only allows the program to execute one block of code if a condition is true, but also a different block if the condition is false. This enables making decisions with two possible outcomes.

```cpp
#include <stdio.h>

int main() {
    int n = 10;

    if (n > 5) {
        printf("%d is greater than 5",n);
    }
      else {
        printf("%d is less than 5",n);
    }

    return 0;
}
```

### Check if a Number is Negative
```cpp
#include <stdio.h>

int main() {
    int n = -7;

      // If the number is negative
    if (n < 0)
        printf("Negative");
  
      // If the number is not negative
      else
        printf("Not Negative");

    return 0;
}
```

### Find Largest Among Three Numbers

```cpp
#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 11;

    // Finding the largest by comparing using
    // relational operators with if-else
    if (a >= b) {
        if (a >= c)
            printf("%d", a);
        else
            printf("%d", c);
    }
    else {
        if (b >= c)
            printf("%d", b);
        else
            printf("%d", c);
    }

    return 0;
}
```