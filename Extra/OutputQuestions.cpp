#include <iostream>
using namespace std;

int main()
{
   int count = 1;
   for (int i = 0; i < 5; i++)
   {
      for (int j = i; j <= 5; j++)
      {
         if (i + j == 10)
         {
            break;
         }
         cout << count << " " << i << " " << j << endl;
         count++;
      }
      // if (i & 1)
      // {
      //    cout << " value of " << i << " & 1 is :- " << (i & 1) << endl;
      //    cout << " this executed when i = " << i << endl;
      //    continue;
      // }
      // i++;
   }
}