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
  cout << "Size of int is " << sizeof(int) << " bytes\n"; // Size of int is 4 bytes
  // check the min of int and the max of int
  // remember to add "#include <climits>"
  cout << "Int min value is " << INT_MIN << endl; // -1, -2, -3, ..., -2147483648
  cout << "Int max value is " << INT_MAX << endl; // 0, +1, +2, +3, ..., +2147483647

  // check the unsigned int
  cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n"; // Size of unsigned int is 4 bytes
  cout << "Unsigned int max value is " << UINT_MAX << endl;
  // Unsigned int max value is 4294967295

  cout << "Size of bool is " << sizeof(bool) << " bytes\n";     // Size of bool is 1 bytes
  cout << "Size of char is " << sizeof(char) << " bytes\n";     // Size of char is 1 bytes
  cout << "Size of float is " << sizeof(float) << " bytes\n";   // Size of float is 4 bytes
  cout << "Size of double is " << sizeof(double) << " bytes\n"; // Size of double is 8 bytes

  return 0;
}