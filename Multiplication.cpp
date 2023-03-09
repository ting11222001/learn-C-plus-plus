#include <iostream>
using namespace std;

int main()
{
    // Multiplication table: from 1 X 1 to 10 X 10

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        // separate each group of 1, 2, ..., 10
        cout << endl;
    }
    return 0;
}