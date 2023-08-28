#include <iostream>
using namespace std;

int main()
{
   int i = 1, n;
   cout << "Enter the number :- ";
   cin >> n;
   while (i <= n)
   {
      int j1 = n;
      int count = 1;
      while (j1 >= i)

      {

         cout << count;
         count++;

         j1--;
      }

      int s1 = i - 1;
      while (s1)
      {
         cout << "*";
         s1--;
      }
      int s2 = i - 1;
      while (s2)
      {
         cout << "*";
         s2--;
      }
      int j2 = n - i + 1;
      while (j2 >= 1)
      {
         cout << j2;
         j2--;
      }
      cout << endl;
      i++;
   }
}

// n=4
// 12344321
// 123**321
// 12****21
// 1******1