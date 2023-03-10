#include <iostream>
using namespace std;
void function(); // we can right click on this to go to definition.

// void function() // It needs to be on top of the main function, or use function declaration at the top.
// {
//   cout << "Hello from function()\n";
// }

int main()
{
  cout << "Hello from main()\n"; // always print: Hello from main()
  function();                    // print when called: Hello from function()
  function();                    // functions help with reusability of the code

  return 0;
}

void function()
{
  cout << "Hello from function()\n";
}
