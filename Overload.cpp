#include <iostream>
using namespace std;

// they're doing the same thing. We can use the same function name, just different data type.
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
  // hover on sum(): to see the hint: we have three overload functions
  cout << sum(4, 3) << endl;          // 7
  cout << sum(4.4, 3.3) << endl;      // 7.7
  cout << sum(4.4, 3.3, 2.2) << endl; // 9.9
  return 0;
}

int sum(int a, int b)
{
  return a + b;
}

double sum(double a, double b)
{
  return a + b;
}

float sum(float a, float b, float c)
{
  return a + b + c;
}