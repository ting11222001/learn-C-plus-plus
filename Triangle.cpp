#include <iostream>
using namespace std;

int main()
{
    // draw a triangle shape

    // input
    int length;
    cout << "Length: ";
    cin >> length;

    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    // // original:
    // // *
    // // **
    // // ***
    // // ****
    // // *****
    // // outer: rows
    // for (int i = 1; i <= length; i++)
    // {
    //     // inner: columns
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << symbol;
    //     }

    //     // after each row, linebreak
    //     cout << endl;
    // }

    // reversed:
    // *****
    // ****
    // ***
    // **
    // *

    for (int i = length; i >= 1; i--)
    {
        // inner: columns
        for (int j = 1; j <= i; j++)
        {
            cout << symbol;
        }

        // after each row, linebreak
        cout << endl;
    }

    return 0;
}