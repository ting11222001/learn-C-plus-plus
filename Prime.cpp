#include <iostream>
using namespace std;

int main()
{
  // check if a number is a prime number
  // i.e. if it's divisible by other than 1 and itself

  int number;
  cout << "Number: ";
  cin >> number;

  bool isPrimeFlag = true;
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      isPrimeFlag = false;
      break;
    }
  }

  if (isPrimeFlag)
  {
    cout << "Prime number" << endl;
  }
  else
  {
    cout << "Not prime number" << endl;
  }

  return 0;
}
