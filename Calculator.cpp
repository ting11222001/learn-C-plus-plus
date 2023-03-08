#include <iostream>
using namespace std;

int main()
{
  float num1, num2;
  char operation;

  cout << "** Calculator ** \n";
  cout << "Enter the 1st number, operation, 2nd number: ";
  cin >> num1 >> operation >> num2;

  // switch by the input operation
  switch (operation)
  {
  case '-':
    cout << num1 << operation << num2 << " = " << num1 - num2;
    break;
  case '+':
    cout << num1 << operation << num2 << " = " << num1 + num2;
    break;
  case '*':
    cout << num1 << operation << num2 << " = " << num1 * num2;
    break;
  case '/':
    cout << num1 << operation << num2 << " = " << num1 / num2;
    break;
  case '%':
    // num1 % num2 will show error because % only works on int
    bool isNum1Int, isNum2Int;
    // check if the input numbers are int. If yes, do % operation. If not, print "not valid".
    isNum1Int = ((int)num1 == num1); // RHS: 5 == 5.0, and save the result to the LHS
    isNum2Int = ((int)num2 == num2);

    if (isNum1Int && isNum2Int)
    {
      cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2;
    }
    else
    {
      cout << "Not Valid!";
    }
    break;
  default:
    // if the operation input is not any of the above.
    cout << "Not valid operation!" << endl;
  }

  return 0;
}