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
      int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,
      while (j <= n)
      {
         cout << i;
         j++;
      }
      cout << endl;
      i++;
   }
}
// n=4
// 1111
// 2222
// 3333
// 4444