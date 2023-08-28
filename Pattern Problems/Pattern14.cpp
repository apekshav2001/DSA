// #include <iostream>
// using namespace std;

// int main()
// {
//    int n;
//    int i = 1;
//    char ch = 'A';
//    cout << "Enter the number :- ";
//    cin >> n;
//    while (i <= n)
//    {
//       int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,
//       while (j <= n)
//       {
//          char value = ch + j - 1;
//          cout << value << " ";
//          j++;
//       }
//       ch++;
//       cout << endl;
//       i++;
//    }
// }
#include <iostream>
using namespace std;

int main()
{
   int n;
   int i = 1;
   // char ch = 'A';
   cout << "Enter the number :- ";
   cin >> n;
   while (i <= n)
   {
      int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,
      char value = 'A' + i - 1;
      while (j <= n)
      {
         // char value = 'A' ;
         cout << value << " ";
         value++;
         j++;
      }
      // ch++;
      cout << endl;
      i++;
   }
}

// n=4
// A B C D
// B C D E
// C D E F
// D E F G