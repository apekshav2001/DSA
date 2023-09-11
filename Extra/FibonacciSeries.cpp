#include <iostream>
using namespace std;

int main()
{
   int n, sum;
   int a = 0, b = 1;
   cout << "Enter the value of n :- ";
   cin >> n;

   cout << "First " << n << "  Fibonacci Series" << endl;
   cout << a << "," << b << ",";
   for (int i = 0; i <= n - 3; i++)
   {
      sum = a + b;
      cout << sum << ",";
      a = b;
      b = sum;
   }
}