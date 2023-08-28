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
         char value = 'A' + i + j - 2;
         cout << value << " ";

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
//    char ch = 'A';
//    cout << "Enter the number :- ";
//    cin >> n;
//    while (i <= n)
//    {
//       int j = 1; // Don't initialize j in the global space then it's value for the seon t loop will be n-1 ,
//       char value = ch;

//       while (j <= i)
//       {
//          cout << value << " ";
//          value++;

//          j++;
//       }
//       ch++;
//       cout << endl;
//       i++;
//    }
// }

// // n=4
// // A
// // B C
// // C D E
// // D E F G