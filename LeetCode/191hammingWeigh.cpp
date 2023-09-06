// Find the number 1's present in the binary form of the givrn number.

#include <iostream>
using namespace std;

int main()
{
   unsigned n;
   int flag = 0;
   cout << "Enter the number in decimal form :- ";
   cin >> n;
   while (n != 0)
   {
      if (n & 1) // we are working on the binary form of the number to find the number of 1(one's) present it.
      {
         flag++;
      }
      n = n >> 1;
   }
   cout << endl
        << flag;
}