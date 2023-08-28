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
      while (j <= i)
      {
         cout << i - j + 1 << " ";
         j++;
      }
      cout << endl;
      i++;
   }
}

// #include <iostream>
// using namespace std;

// int main()
// {
//    int n;
//    int i = 1;
//    int count;
//    cout << "Enter the number :- ";
//    cin >> n;
//    while (i <= n)
//    {
//       int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,
//       count = i;
//       while (j <= i)
//       {
//          cout << count << " ";
//          count--;
//          j++;
//       }
//       cout << endl;
//       i++;
//    }
// }

// n=4
// 1
// 2 1
// 3 2 1
// 4 3 2 1