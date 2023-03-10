#include <iostream>
using namespace std;

bool isPrimeNumber(int number)
{
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      return false; // as long as we enter here, return false
    }
  }

  return true; // default true
}

int main()
{
  // check if a number is a prime number
  // i.e. if it's divisible by other than 1 and itself

  // int number;
  // cout << "Number: ";
  // cin >> number;

  // bool isPrimeFlag = isPrimeNumber(number);

  // if (isPrimeFlag)
  // {
  //   cout << "Prime number" << endl;
  // }
  // else
  // {
  //   cout << "Not prime number" << endl;
  // }

  // We can use the same function in other scenarios
  // e.g. list out all the prime numbers of a range
  for (int i = 1; i <= 30; i++)
  {
    bool isPrime = isPrimeNumber(i);
    if (isPrime)
      cout << i << " is prime number\n";
  }

  return 0;
}
