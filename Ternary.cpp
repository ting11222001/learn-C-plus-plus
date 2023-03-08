#include <iostream>
using namespace std;

int main()
{
  // Build a Guessing game app
  int hostUserNum, guestUserNum;
  cout << "Host: ";
  cin >> hostUserNum;
  // clear the console
  system("cls");
  cout << "Guest: ";
  cin >> guestUserNum;

  // // original multi-line statements
  // if (hostUserNum == guestUserNum)
  // {
  //   cout << "Correct!";
  // }
  // else
  // {
  //   cout << "Failed!";
  // }

  // ternary statements
  (hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed!";

  return 0;
}