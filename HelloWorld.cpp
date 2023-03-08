#include <iostream>
// #include iostream declares objects that control reading from and writing to the standard streams. In other words, the iostream library is an object-oriented library that provides input and output functionality using streams. A stream is a sequence of bytes. You can think of it as an abstraction representing a device.
using namespace std;
// using namespace std means that we can use names for objects and variables from the standard library.

int main()
{
  cout << "Hello world!" << endl;
  return 0;
}

// build: g++ -o HelloWorld.exe HelloWorld.cpp
// run: ./HelloWorld.exe