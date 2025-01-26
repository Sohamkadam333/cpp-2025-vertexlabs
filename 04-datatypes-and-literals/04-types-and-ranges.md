# Data Type Ranges and Their Macros
#### Most of the times, in competitive programming, there is a need to assign the variable, the maximum or minimum value that data type can hold but remembering such a large and precise number comes out to be a difficult job. Therefore, C++ has certain macros to represent these numbers, so that these can be directly assigned to the variable without actually typing the whole number.

#### The <climits> header file in C++ defines macros that represent the upper and lower bounds of integer data types and <cfloat> defines the macros for float and double limits. These macros allow you to easily assign these extreme values to variables without manually typing them out.

## Data Types and Their Range Macros
<table><thead><tr><th style="width: 116.667px;"><p dir="ltr"><span>Data Type</span></p>
</th><th style="width: 116.667px;"><p dir="ltr"><span>Range </span></p>
</th><th style="width: 116.667px;"><p dir="ltr"><span>Macro for min value </span></p>
</th><th style="width: 116.667px;"><p dir="ltr"><span>Macro for max value </span></p>
</th></tr></thead><tbody><tr><th style="width: 140px;"><p dir="ltr"><span> char </span></p>
</th><td style="width: 140px;"><p dir="ltr"><span>-128 to +127  </span></p>
</td><td style="width: 140px;"><p dir="ltr"><span>CHAR_MIN </span></p>
</td><td style="width: 140px;"><p dir="ltr"><span>CHAR_MAX </span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>short char </span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>-128 to +127 </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>SCHAR_MIN </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>SCHAR_MAX</span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>unsigned char  </span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>0 to 255  </span></p>
</td><td style="width: 116.667px;">
<p><span>—</span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>UCHAR_MAX </span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>short int </span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>-32768 to +32767  </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>SHRT_MIN </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>SHRT_MAX                  </span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>unsigned short int </span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>0 to 65535 </span></p>
</td><td style="width: 116.667px;">
<p><span>—</span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>USHRT_MAX</span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>int </span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>-2147483648 to +2147483647 </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>INT_MIN </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>INT_MAX                   </span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>unsigned int </span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>0 to 4294967295 </span></p>
</td><td style="width: 116.667px;">
<p><span>—</span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>UINT_MAX </span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>long int </span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>-9223372036854775808 to +9223372036854775807</span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>LONG_MIN </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>LONG_MAX</span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>unsigned long int</span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>0 to 18446744073709551615</span></p>
</td><td style="width: 116.667px;">
<p><span>—</span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>ULONG_MAX</span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>long long int</span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>-9223372036854775808 to +9223372036854775807</span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>LLONG_MIN</span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>LLONG_MAX</span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>unsigned long long int</span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>0 to 18446744073709551615 </span></p>
</td><td style="width: 116.667px;">
<p><span>—</span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>ULLONG_MAX</span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>float  </span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>1.17549e-38 to 3.40282e+38 </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>FLT_MIN  </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>FLT_MAX </span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>float (negative)</span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>-1.17549e-38 to -3.40282e+38  </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>-FLT_MIN </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>-FLT_MAX</span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>double</span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>2.22507e-308 to 1.79769e+308  </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>DBL_MIN </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>DBL_MAX </span></p>
</td></tr><tr><th style="width: 116.667px;"><p dir="ltr"><span>double (negative) </span></p>
</th><td style="width: 116.667px;"><p dir="ltr"><span>-2.22507e-308 to -1.79769e+308 </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>-DBL_MIN </span></p>
</td><td style="width: 116.667px;"><p dir="ltr"><span>-DBL_MAX </span></p>
</td></tr></tbody></table>

```cpp
#include <iostream>

// for int, char macros
#include <climits>

// for float, double macros
#include <cfloat>

using namespace std;

int main() {
  
    // Displaying ranges with the help of macros
    cout << "char ranges from: " << CHAR_MIN << " to "
         << CHAR_MAX << endl;

    cout << "\nnshort int ranges from: " << SHRT_MIN
         << " to " << SHRT_MAX << endl;
    cout << "\nint ranges from: " << INT_MIN << " to "
         << INT_MAX << endl;
    cout << "\nlong int ranges from: " << LONG_MIN << " to "
         << LONG_MAX << endl;
    cout << "\nfloat ranges from: " << FLT_MIN << " to "
         << FLT_MAX << endl;

    return 0;
}
```