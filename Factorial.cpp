#include <iostream>
using namespace std;

int main()
{
    // The factorial of a number
    // 6! = 1 * 2 * 3 * 4 * 5 * 6 = 720

    int number;
    cout << "Number: ";
    cin >> number;

    int factorial = 1;

    // // start the counter from 1
    // for (int i = 1; i <= number; i++)
    // {
    //     factorial *= i;
    // }

    // start the counter from the last
    for (int i = number; i >= 1; i--)
    {
        factorial *= i;
    }

    cout << number << "!= " << factorial << endl;

    return 0;
}