#include <iostream>
using namespace std;

void showMenu()
{
  cout << "********** Menu **********" << endl;
  cout << "1. Check balance" << endl;
  cout << "2. Deposit" << endl;
  cout << "3. Withdraw" << endl;
  cout << "4. Exit" << endl;
  cout << "**************************" << endl;
}

int main()
{
  // Build an ATM app
  // check balance, deposit, withdraw, show menu
  int option;
  double balance = 500;

  do
  {
    showMenu(); // keep showing the menu until the user inputs 4
    cout << "Option: ";
    cin >> option;
    system("cls"); // clear the console after the user enters his option

    switch (option)
    {
    case 1:
      cout << "Balance is: " << balance << " $" << endl;
      break;
    case 2:
      cout << "Deposit amount: ";
      double depositAmount;
      cin >> depositAmount;
      balance += depositAmount;
      break;
    case 3:
      cout << "Withdraw amount: ";
      double withdrawAmount;
      cin >> withdrawAmount;
      if (withdrawAmount <= balance)
      {
        balance -= withdrawAmount;
      }
      else
      {
        cout << "Not enough money" << endl;
      }
      break;
    default:
      cout << "Not valid option!" << endl;
      break;
    }
  } while (option != 4);

  return 0;
}
