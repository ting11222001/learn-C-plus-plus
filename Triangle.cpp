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

    // outer: rows
    for (int i = 1; i <= length; i++)
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