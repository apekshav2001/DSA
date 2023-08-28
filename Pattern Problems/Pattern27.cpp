#include <iostream>
using namespace std;

int main()
{
   int n;
   int i = 1;
   cout << "Enter the number :- ";
   cin >> n;
   while (i <= n)
   {
      int s = n - i; // int s= n-i;
      while (s)      // while (s)
      {
         cout << " ";
         s--;
      }
      int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,
      while (j <= i)
      {
         cout << j;
         j++;
      }
      int k = i - 1;
      while (k)
      {
         cout << k;
         k--;
      }
      cout << endl;
      i++;
   }
}

// n=4
//    1
//   121
//  12321
// 1234321