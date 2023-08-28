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
      while (j >= i)
      {
         cout << "*";
         j--;
      }
      cout << endl;
      i++;
   }
}
// n=4
// ****
//  ***
//   **
//    *