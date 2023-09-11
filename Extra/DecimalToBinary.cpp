// Convert the given decimal number in it's binary form

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//    int n;
//    cout << "Enter the number in Decimal Form :- ";
//    cin >> n;
//    int ans = 0;
//    int i = 0;
//    while (n != 0)
//    {
//       int bit = n & 1;
//       ans = (bit * pow(10, i)) + ans;
//       n = n >> 1;
//       i++;
//    }
//    cout << "Binary form of the given number :- " << ans;
// }

// It's not showing a correct output for some numbers but this same source code is giving the correct output on an online compiler

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//    int n;
//    cout << "Enter the number in Decimal Form :- ";
//    cin >> n;
//    int ans = 0;
//    int i = 0;
//    while (n != 0)
//    {
//       int bit = n % 2;
//       ans = (bit * pow(10, i)) + ans;
//       n = n / 2;
//       i++;
//    }
//    cout << "Binary form of the given number :- " << ans;
// }
// Both programs are working . But it has the same problem as above one .

#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int n)
{
   int ans = 0;
   int i = 0;
   while (n != 0)
   {
      int bit = n & 1;
      ans = (bit * pow(10, i)) + ans;
      n = n >> 1;
      i++;
   }
   return ans;
}
int main()
{
   int n;
   cin >> n;

   if (n < 0)
   {
      // if number is negative
      n = n * (-1);
      int ans = decimalToBinary(n);
      // Find 2's compliment of the number
      // 1's comp
      int newAns = (~ans);
      // 2's comp
      newAns = newAns + 1;
      cout << newAns << endl;
   }
   else
   {
      // if number is positive
      int ans = decimalToBinary(n);
      cout << ans << endl;
   }
}
