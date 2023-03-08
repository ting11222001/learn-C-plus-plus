#include <iostream>
using namespace std;
#include <climits>

int main()
{
  // see variables as a cup, different cups can hold different amount of data
  int yearOfBirth = 19;
  char gender = 'f';
  bool isOlderThan18 = true;
  float averageGrade = 4.5;
  double balance = 4567982;

  // use sizeof to check the memory space a data type is taking
  cout << "Size of int is " << sizeof(int) << " bytes\n"; // output: Size of int is 4 bytes
  // check the min of int and the max of int
  // remember to add "#include <climits>"
  cout << "Int min value is " << INT_MIN << endl; // -1, -2, -3, ..., -2147483648
  cout << "Int max value is " << INT_MAX << endl; // 0, +1, +2, +3, ..., +2147483647

  return 0;
}