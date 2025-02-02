# Buffer Flushing in C++

#### Buffer flushing is the process of forcing the data stored in an output buffer to be written to its final destination (such as the console, a file, etc.). By default, C++ output streams (like cout, cerr, etc.) use buffering to optimize performance. This means that output is temporarily stored in a buffer before being actually written to the destination. This buffering mechanism reduces the number of system calls, improving the performance of I/O operations.

## What is a Buffer?

#### A buffer is a temporary storage area in memory where data is held before being written to or read from a device (e.g., a file, console, or network). The buffer allows multiple pieces of data to be written or read in a single operation, reducing the time spent in I/O operations.


## When is Buffer Flushing Done Automatically?
#### Buffering is usually automatic, and the buffer is flushed:

- When the buffer is full: Once the buffer is full, it is automatically flushed to make space for more data.
- When the program exits: On program termination, the C++ runtime typically flushes all the buffered data to ensure that nothing is left behind.
- When the program ends or std::endl is used: std::endl (or any other similar command) forces an immediate flush of the buffer.
- When explicitly requested using flush(): You can explicitly request the flushing of a buffer using flush().


```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Processing data..." << flush;  // Forces the output to be displayed immediately
    // Simulate some long processing
    for (int i = 0; i < 100000000; ++i); // Busy loop
    cout << " Done!" << endl;  // Newline after completion
    return 0;
}
```