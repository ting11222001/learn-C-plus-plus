#include <iostream>
using namespace std;

int main()
{
  // +, -, *, /, %
  cout << 5 + 2 << endl;     // 7
  cout << 5 / 2 << endl;     // 2: only 2 can be put in the int variable
  cout << 5.0 / 2.0 << endl; // 2.5: if one of the them or both of them are floats
  cout << 5 % 2 << endl;     // 1

  // ++, --
  int counter = 7;
  counter++;
  cout << counter << endl; // 8
  counter--;
  cout << counter << endl; // 7

  // pre-increment (same for decrementing)
  int counter2 = 7;
  cout << counter2++ << endl; // 7
  int counter3 = 7;
  cout << ++counter3 << endl; // 8

  // <, >, <=, >=, ==, !=
  int a = 5, b = 5;
  cout << (a > b) << endl;  // 0
  cout << (a <= b) << endl; // 1
  cout << (a == b) << endl; // 1
  cout << (a != b) << endl; // 0

  // &&, ||, !
  int c = 5, d = 8;
  cout << (c == 5 && d == 5) << endl;  // 0
  cout << (c == 5 || d == 5) << endl;  // 1
  cout << !(c == 5 || d == 5) << endl; // 0

  // watch out for the priority!
  // arithmetic > relational > logical operaters
  cout << (c == 5 && d == 5 + 3) << endl; // 1

  // =, +=, -=, *=, /=, %=
  int x = 5;
  x += 7;
  cout << x << endl; // 12

  return 0;
}