#include <iostream>
// #include iostream declares objects that control reading from and writing to the standard streams. In other words, the iostream library is an object-oriented library that provides input and output functionality using streams. A stream is a sequence of bytes. You can think of it as an abstraction representing a device.
using namespace std;
// using namespace std means that we can use names for objects and variables from the standard library.

int main()
{
  // To print, I can write either of these two:
  // cout << "Hello world!" << endl;
  std::cout << "Hello world!\n";

  // variable assignment
  string fruit = "apple";
  string fruits[5] = {"apple", "organge", "pear", "strawberry", "banana"};
  for (int i = 0; i < 5; i++)
  {
    cout << fruits[i] << endl;
  }

  // float annualSalary = 50000.99;
  // or we can ask for user intput
  float annualSalary;
  // write a message in the terminal
  cout << "Please enter your annual salary: ";
  cin >> annualSalary;

  float monthlySalary = annualSalary / 12;
  // output the result into a variable
  // cout << "Your monthly salary is " << monthlySalary;
  // add a linebreak
  cout << "Your monthly salary is " << monthlySalary << endl;
  cout << "In 10 years you will earn " << annualSalary * 10;

  return 0;
}

// build: g++ -o HelloWorld.exe HelloWorld.cpp
// run: ./HelloWorld.exe