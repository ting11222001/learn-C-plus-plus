#include <iostream>
using namespace std;

int main()
{
    // Reverse digits
    int number, reversedNumber = 0;
    cout << "Number: ";
    cin >> number;
    // if the number is 123
    // 0 * 10 = 0, take 3 and add it to 0, then reversedNumber = 3
    // 3 * 10 = 30, take 2 and add it to 30, then reversedNumber = 32
    // 32 * 10 = 320, take 1 and add it to 320, then reversedNumber = 321

    while (number > 0)
    {
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        // remove the last digit from number
        number /= 10;
    }

    cout << "Reversed: " << reversedNumber << endl;

    return 0;
}