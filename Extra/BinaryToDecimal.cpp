// Convert the given binary form of a number to it's decimal number
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n;
   cout << "Enter the number in Binary form :- ";
   cin >> n;
   int i = 0, ans = 0;
   while (n != 0)
   {
      int digit = n % 10;
      if (digit == 1)
      {
         ans = ans + pow(2, i);
      }
      n = n / 10;
      i++;
   }
   cout << "Number in Decimal form :- " << ans << endl;
}