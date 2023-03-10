#include <iostream>
using namespace std;

// & means passing in the reference of a and b
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void swap(char &a, char &b)
{
  char temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 5, b = 7;
  cout << a << " - " << b << endl;
  swap(a, b);
  cout << a << " - " << b << endl;

  char c = 'c', d = 'd';
  cout << c << " - " << d << endl;
  swap(c, d);
  cout << c << " - " << d << endl;

  return 0;
}