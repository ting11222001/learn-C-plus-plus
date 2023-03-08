#include <iostream>
using namespace std;

int main()
{
  // Build a program that checks number of days in a month

  // check if a year is a leap year (i.e. the year has 366 days)
  // (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
  int year, month;
  cout << "Year, month: ";
  cin >> year >> month;

  switch (month)
  {
  case 2:
    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "29 days month." : cout << "28 days month.";
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    cout << "30 days month."; // when the month is 4, 6, 9, it will continue to case 11 and execute this line.
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    cout << "31 days month."; // similar logic as the above case 11.
    break;
  default:
    cout << "Not valid.";
    break;
  }

  return 0;
}