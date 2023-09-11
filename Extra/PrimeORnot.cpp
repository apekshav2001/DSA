#include <iostream>
using namespace std;

int main()
{
   int n;
   // int t = 2;
   int flag = 1;
   cout << "Enter the number :- ";
   cin >> n;
   // while (i < n)
   // {
   //    if (n % i != 0)
   //    {
   //    }
   //    else
   //    {
   //       flag++;
   //    }
   //    i++;
   // }
   // if (flag == 0)
   //    cout << "This is a prime number";
   // else
   //    cout << "this is not a prime number";
   for (int i = 2; i < n; i++)
   {
      if (n % i == 0)
      {
         flag = 0;
         break;
      }
   }
   if (flag == 0)
   {
      cout << "This is not a prime Number.";
   }
   else
   {
      cout << "This is a prime Number.";
   }
}
