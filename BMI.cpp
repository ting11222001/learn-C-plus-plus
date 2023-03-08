#include <iostream>
using namespace std;

int main()
{
  // BMI calculator
  // weight(kg) / (height * height) (m)
  // underweight < 18.5
  // normal weight 18.5 - 24.9
  // overweight > 25

  float weight, height;
  cout << "Please enter your weight(kg) and height(m): ";
  cin >> weight >> height;

  float bmi = weight / (height * height);

  cout << "Your BMI is: " << bmi << endl;

  if (bmi < 18.5)
  {
    cout << "underweight.\n";
  }
  else if (bmi > 25)
  {
    cout << "overweight.\n";
  }
  else
  {
    cout << "normal weight.\n";
  }

  cout << "Thanks, bye!\n";

  return 0;
}