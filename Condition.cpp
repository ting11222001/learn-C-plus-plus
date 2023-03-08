#include <iostream>
using namespace std;

int main()
{
  // user enters integer number
  // Program write out if that number is even or odd

  // % operater gives the remainder
  // cout << 5 % 2; // 1
  // cout << 2 % 2; // 0
  int number;
  cout << "Please enter the whole number: ";
  cin >> number;
  if (number % 2 == 0)
  {
    cout << "You have entered an even number.\n";
  }
  else
  {
    cout << "You have entered an odd number.\n";
  }

  cout << "Thanks, bye!\n";

  return 0;
}