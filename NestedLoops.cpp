#include <iostream>
using namespace std;

int main()
{
    // enter three grades
    // each grade should be in the range of 1 to 5
    // if not, the same grade will be asked again
    // calculate the average grade

    int grade, sum = 0;

    for (int i = 0; i < 3; i++)
    {
        // if the grade is not within the range, ask again
        do
        {
            cout << "Enter grade " << i + 1 << ": ";
            cin >> grade;
        } while (grade < 1 || grade > 5);

        // sum up
        sum += grade;
    }

    cout << "Sum = " << sum << endl; // if sum is 8
    // if we do "sum / 3", it will return int avg grade, not the float avg grade
    // so, either one of denominator and numerator or both should be casted as float
    cout << "Avg grade = " << (float)sum / 3.0 << endl; // then the avg will be 2.66667

    return 0;
}