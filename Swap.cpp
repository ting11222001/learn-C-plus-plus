#include <iostream>
using namespace std;

int main()
{
  // Program for swapping values of two variables
  int a = 20;
  int b = 10;

  int temp = a;
  a = b;
  b = temp;

  cout << "a = " << a << ", b = " << b << endl; // a = 10, b = 20

  return 0;
}