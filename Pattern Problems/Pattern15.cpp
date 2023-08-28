#include <iostream>
using namespace std;

int main()
{
   int n;
   int i = 1;
   char ch = 'A';
   cout << "Enter the number :- ";
   cin >> n;
   while (i <= n)
   {
      int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,
      while (j <= i)
      {
         cout << ch << " ";
         j++;
      }
      ch++;
      cout << endl;
      i++;
   }
}

// n=4
// A
// B B
// C C C
// D D D D