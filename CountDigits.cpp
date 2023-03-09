#include <iostream>
using namespace std;

int main()
{
    // Program for counting digits of a number
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // edge case: when user enters 0
    if (number == 0)
    {
        cout << "You have entered 0.\n";
    }
    else
    {
        // For any number, e.g. 1325, divide it by 10 to remove the last digit
        // set a counter as 0, and increment it by 1 after each iteration
        int counter = 0;
        while (number > 0)
        {
            number = number / 10; // 123 -> 12 -> 1
            counter++;
        }
        cout << "Number contains " << counter << " digits\n";
    }

    return 0;
}