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
//       count = i;
//       int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,
//       while (j <= i)
//       {
//          cout << count << " ";
//          count++;
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
      while (j <= i)
      {
         cout << i + j - 1 << " ";
         j++;
      }
      cout << endl;
      i++;
   }
}

// n=4
// 1
// 2 3
// 3 4 5
// 4 5 6 7