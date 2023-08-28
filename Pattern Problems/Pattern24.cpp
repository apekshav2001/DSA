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
      while (s > 0)

      {

         cout << " ";
         s--;
      }
      int j = n;
      int count = i;
      while (j >= i)
      {

         cout << count;
         count++;
         j--;
      }
      cout << endl;
      i++;
   }
}
// n=4
// 1234
//  234
//   34
//    4