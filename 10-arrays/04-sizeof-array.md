# Print size of array parameter 

```cpp
// A C++ program to show that it is wrong to
// compute size of an array parameter in a function
#include <iostream>
using namespace std;

void findSize(int arr[]) 
{ 
cout << sizeof(arr) << endl; 
}

int main()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize(a);
	return 0;
}
```


```cpp
// A C++ program to show that we can use reference to
// find size of array
#include <iostream>
using namespace std;

void findSize(int (&arr)[20])
{
	cout << sizeof(arr) << endl;
}

int main()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize(a);
	return 0;
}
```

### Using Templates

```cpp
// A C++ program to show that we use template and
// reference to find size of integer array parameter
#include <iostream>
using namespace std;

template <size_t n>
void findSize(int (&arr)[n])
{
	cout << sizeof(int) * n << endl;
}

int main()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize(a);
	return 0;
}
```

### Generic function

```cpp
// A C++ program to show that we use template and
// reference to find size of any type array parameter
#include <iostream>
using namespace std;

template <typename T, size_t n>
void findSize(T (&arr)[n])
{
	cout << sizeof(T) * n << endl;
}

int main()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize(a);

	float f[20];
	cout << sizeof(f) << " ";
	findSize(f);
	return 0;
}
```