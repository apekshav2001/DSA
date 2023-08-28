// #include <iostream>
// using namespace std;

// int main()
// {
//    int n;
//    int i = 1;
//    cout << "Enter the number :- ";
//    cin >> n;
//    while (i <= n)
//    {
//       int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,

//       while (j <= i)
//       {
//          char value = 'A' - i + j + (n - 1);
//          cout << value << " ";

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
      char value = 'A' + n - i;

      while (j <= i)
      {
         cout << value << " ";
         value++;
         j++;
      }
      cout << endl;
      i++;
   }
}

// n=4
// D
// C D
// B C D
// A B C D