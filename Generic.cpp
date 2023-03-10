#include <iostream>
using namespace std;

template <typename T> // T means generic data type. It can be any name e.g. Type

// generic function's names needs to be captialized
void Swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

// overload approach
// // & means passing in the reference of a and b
// void swap(int &a, int &b)
// {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// void swap(char &a, char &b)
// {
//   char temp = a;
//   a = b;
//   b = temp;
// }

int main()
{
  int a = 5, b = 7;
  cout << a << " - " << b << endl;
  Swap(a, b);
  // Swap<int>(a, b); // I can invoke specific data type
  cout << a << " - " << b << endl;

  char c = 'c', d = 'd';
  cout << c << " - " << d << endl;
  Swap(c, d);
  // Swap<char>(a, b);
  cout << c << " - " << d << endl;

  return 0;
}