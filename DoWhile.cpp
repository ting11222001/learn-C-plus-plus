#include <iostream>
using namespace std;

int main()
{
    // Program for PIN validation
    // We're given three attemps

    // usersPin: the actual pin,
    // pin: the input from users
    // errorCounter: attempts
    int usersPin = 1234, pin, errorCounter = 0;

    // do the block of code will execute first and then the while condition will be checked
    do
    {
        cout << "PIN: ";
        cin >> pin;

        if (pin != usersPin)
        {
            errorCounter++;
        }
    } while (errorCounter < 3 && pin != usersPin);

    // if one of the conditions is False,
    // e.g. errorCounter < 3 is true, pin != usersPin is false
    if (errorCounter < 3)
    {
        cout << "Unlocked...Loading" << endl;
    }
    else
    {
        cout << "Blocked..." << endl;
    }

    return 0;
}