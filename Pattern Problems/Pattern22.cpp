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
      int s = i - 1;
      while (s)
      {
         cout << " ";
         s--;
      }
      int j = n;
      while (j >= i)
      {
         cout << i;
         j--;
      }
      cout << endl;
      i++;
   }
}
// n=4
// 1111
//  222
//   33
//    4