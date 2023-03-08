#include <iostream>
using namespace std;

int main()
{
  // casting operators can tell us the ASCII value of character, a
  // lowercase and uppercase will be different
  cout << (int)'a' << endl; // 97
  cout << int('a') << endl; // 97
  cout << int('A') << endl; // 65
  // convert the ascii value to the character
  cout << char(65) << endl; // A

  // a simple decipher app
  char c1, c2, c3;
  cout << "Enter 3 letters: ";
  cin >> c1 >> c2 >> c3;                                                    // tea
  cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3); // 116 101 97

  return 0;
}