#include <iostream>
using namespace std;

void introduceMe(string name, int age, string city = "NA", int count = 0) // parameters can default values
{
  cout << "My name is " << name << endl;
  cout << "My age is " << age << endl;
  cout << "I live in " << city << endl;

  if (count != 0) // if no laptops, don't print this line.
  {
    cout << "I have " << count << " laptops" << endl;
  }

  cout << endl;
}

int main()
{
  // introduceMe("Apple", 20, "Adelaide", 3);
  // // My name is Apple. My age is 20. I live in Adelaide. I have 3 laptops.
  // introduceMe("Banana", 5);
  // // My name is Banana. My age is 5. I live in NA.

  // take user input
  string name, city;
  int age, count;
  cout << "Name: ";
  cin >> name;
  cout << "Age: ";
  cin >> age;
  cout << "City: ";
  cin >> city;
  cout << "How many laptop do you have: ";
  cin >> count;

  introduceMe(name, age, city, count);
  introduceMe(name, age); // city and count will be default values

  return 0;
}
