#include <iostream>
using namespace std;

int recursive_sum(int m, int n) // m = 2 -> 3 -> 4, n = 4
{
  // base case
  if (m == n)
    return m;

  return m + recursive_sum(m + 1, n); // 2 + (3 + (4)) -> 2 + (3 + 4) -> 2 + 7 -> 9
}

// sum numbers between m and n
int main()
{

  int m = 2, n = 4;
  cout << "Sum = " << recursive_sum(m, n) << endl; // 9

  // iterative:
  // int sum = 0;
  // for (int i = m; i <= n; i++)
  // {
  //   sum += i;
  // }

  // cout << "Sum = " << sum; // 9

  return 0;
}