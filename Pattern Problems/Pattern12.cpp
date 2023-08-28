// #include <iostream>
// using namespace std;

// int main()
// {
//    int n;
//    int i = 1;
//    // or ch = 'A';
//    cout << "Enter the number :- ";
//    cin >> n;
//    while (i <= n)
//    {
//       int j = 1; // Don't initialize j in the global space then it's value for the second loop will be n-1 ,
//       char ch = 65;
//       while (j <= n)
//       {
//          cout << ch << " ";
//          ch++;

//          j++;
//       }
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
   cout << "Enter the number :- ";
   cin >> n;
   while (i <= n)
   {
      int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,
      while (j <= n)
      {
         char ch = 'A' + (j - 1);
         cout << ch << " ";
         j++;
      }
      cout << endl;
      i++;
   }
}

// n=4
// A B C D
// A B C D
// A B C D
// A B C D