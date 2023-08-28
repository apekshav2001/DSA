#include <iostream>
using namespace std;

int main()
{
   int n;
   int i = 1;
   char ch = 65; // or ch = 'A';
   cout << "Enter the number :- ";
   cin >> n;
   while (i <= n)
   {
      int j = 1; // Don't initialize j in the global space then it's value for the second loop will be n-1 ,

      while (j <= n)
      {
         cout << ch << " ";
         ch++;
         j++;
      }
      cout << endl;
      i++;
   }
}

//  n=4
// A B C D
// E F G H
// I J K L
// M N O P