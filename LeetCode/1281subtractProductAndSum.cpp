#include <iostream>
using namespace std;

int main()
{
   int n;
   int Prod = 1;
   int Sum = 0;
   cout << "Enter the number :- ";
   cin >> n;
   while (n != 0)
   {
      int digit = n % 10;
      Prod = Prod * digit;
      Sum = Sum + digit;
      n = n / 10;
   }
   int ans = Prod - Sum;
   cout << endl
        << ans;
}