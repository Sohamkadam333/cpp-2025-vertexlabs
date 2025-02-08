# Difference Between Call by Value and Call by Reference

#### In C++ programming we have different ways to pass arguments to functions mainly by Call by Value and Call by Reference method. These two methods differ by the types of values passed through them as parameters.

#### Before we look into the call-by-value and call-by-reference methods, we first need to know what are actual and formal parameters.

#### The actual parameters also known as arguments are the parameters that are passed into the function when we make a function call whereas formal parameters are the parameters that we see in the function or method definition i.e. the parameters received by the function.

### 1. Call by Value

#### In the call-by-value method, function arguments are passed by copying the value of the actual parameter, ensuring the original values remain unchanged. The value is copied to the formal parameter.

#### One is the original copy and the other is the function copy. Any changes made to the parameters within the function do not change the original values outside the function.

```cpp
// C++ program to demonstrate call by value

#include <iostream>
using namespace std;

// function to update the original value
void increment(int num)
{
    num++;
    cout << num << endl;
}

int main()
{
    int number = 5;
    increment(number); // Passing 'number' by value
    cout << number << endl;
    return 0;
}
```


### 2. Call by Reference

#### In the call-by-reference method, the memory address (reference) of the actual parameter is passed to the function, allowing direct access and modification of the original values. The actual and the formal parameters point to the same memory address. Any changes made to the parameters within the function are directly reflected in the original values outside the function

```cpp
// C++ program to demonstrate the working of call by
// reference

#include <iostream>
using namespace std;

// function to update the original value
void increment(int& num)
{
    num++;
    cout << num << endl;
}

int main()
{
    int number = 5;
    increment(number); // Passing 'number' by reference
    cout << number << endl;
    return 0;
}
```


### Difference between the Call by Value and Call by Reference

<table class="GFGEditorTheme__table"><colgroup><col><col><col></colgroup><thead><tr><th class="GFGEditorTheme__tableCell GFGEditorTheme__tableCellHeader" style="width: 233.333px;"><p dir="ltr" style="text-align: center;"><span>Feature</span></p>
</th><th class="GFGEditorTheme__tableCell GFGEditorTheme__tableCellHeader" style="width: 233.333px;"><p dir="ltr" style="text-align: center;"><span>Call by Value</span></p>
</th><th class="GFGEditorTheme__tableCell GFGEditorTheme__tableCellHeader" style="width: 233.333px;"><p dir="ltr" style="text-align: center;"><span>Call by Reference</span></p>
</th></tr></thead><tbody><tr><th class="GFGEditorTheme__tableCell GFGEditorTheme__tableCellHeader" style="width: 233.333px;"><span>Value Passed</span></th><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>In this method, the value of the variable is passed to the function.</span></td><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>In call by reference memory address of the variable is passed.</span></td></tr><tr><th class="GFGEditorTheme__tableCell GFGEditorTheme__tableCellHeader" style="width: 233.333px;"><b><strong>Scope of Changes</strong></b></th><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>In this method, the original value remains unchanged even when we make changes in the function.</span></td><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>In this method, the changes made are reflected in the original variable.</span></td></tr><tr><th class="GFGEditorTheme__tableCell GFGEditorTheme__tableCellHeader" style="width: 233.333px;"><b><strong>Performance</strong></b></th><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>It may require extra memory and time to copy so less efficient.</span></td><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>It is more memory and time efficient as compared to "call by value".</span></td></tr><tr><th class="GFGEditorTheme__tableCell GFGEditorTheme__tableCellHeader" style="width: 233.333px;"><b><strong>Memory Location</strong></b></th><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>The memory addresses of the actual and formal parameters are different.</span></td><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>The actual and the formal parameters point at the same memory address.</span></td></tr><tr><th class="GFGEditorTheme__tableCell GFGEditorTheme__tableCellHeader" style="width: 233.333px;"><span>Applications</span></th><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>Mainly used to pass values for small data or when we do not want to change original values.</span></td><td class="GFGEditorTheme__tableCell" style="width: 233.333px;"><span>It is used when we want to modify the original value or save resources.</span></td></tr></tbody></table>