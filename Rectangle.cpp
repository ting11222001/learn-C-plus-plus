#include <iostream>
using namespace std;

int main()
{
    // draw a rectangle shape

    // input
    int height, width;
    cout << " Height: ";
    cin >> height;
    cout << " Width: ";
    cin >> width;

    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    // the outer loop: height
    for (int h = 0; h < height; h++)
    {
        // the inner loop: width
        for (int w = 0; w < width; w++)
        {
            cout << symbol;
        }

        // linebreak for each row
        cout << endl;
    }

    return 0;
}