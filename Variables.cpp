#include <iostream>
using namespace std;

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

  return 0;
}