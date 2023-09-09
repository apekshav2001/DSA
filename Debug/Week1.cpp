// #include <iostream>
// using namespace std;

// int main()
// {
//    char c;
//    cin >> c;
//    if (c >= 'a' && c <= 'z')
//    {
//       cout << 0;
//    }
//    else if (c >= 'A' && c <= 'Z')
//    {
//       cout << 1;
//    }
//    else
//    {
//       cout << -1;
//    }
// }

/*
Pattern
1
23
345
4567
*/
/*#include <iostream>
using namespace std;

int main()
{
   int n;
   int i = 1;
   cin >> n;
   while (i < n)
   {
      int j = i, count = 1;
      while (count <= i)
      {
         cout << j;
         j = j + 1;
         count = count + 1;
      }
      cout << "\n";
      i = i + 1;
   }
}*/

/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >> n;
//    int i = 0;
//    while (i < n)
//    {
//       int j = i, gaps = (n - i), k = 1;
//       while (k < gaps)
//       {
//          cout << " ";
//          k = k + 1;
//       }
//       int m = 0, ch = 2 * i + 1;
//       while (m < ch)
//       {
//          cout << "*";
//          m = m + 1;
//       }
//       k = 1;
//       while (k < gaps)
//       {
//          cout << " ";
//          k = k + 1;
//       }
//       cout << "\n";
//       i = i + 1;
//    }
// }

/*
Pattern
N = 4
1
22
333
4444
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//    int i, j, n;
//    cin >> n;
//    for (i = 0; i < n; i++)
//    {
//       for (j = 0; j <= i; j++)
//       {
//          cout << i + 1;
//       }
//       cout << endl;
//    }
// }

/*
Pattern
N = 4
1
21
321
4321
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//    int i, j, n;
//    cin >> n;
//    for (i = 0; i < n; i++)
//    {
//       int p = i + 1;
//       for (j = 0; j <= i; j++)
//       {
//          cout << p;
//          p--;
//       }
//       cout << endl;
//    }
// }

/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//    int i, j, n;
//    ;
//    cin >> n;
//    for (i = 0; i < n; i++)
//    {
//       char p = 'A' + n - 1 - i;
//       for (j = 0; j <= i; j++)
//       {
//          cout << p;
//          p++;
//       }
//       cout << endl;
//    }
// }

/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//    int no;
//    cin >> no;
//    int i = 1;
//    int n = 2 * no;
//    while (i <= (no))
//    {
//       int gaps = n - 2 * i + 1, k = 1;
//       int j = i;
//       while (k <= gaps / 2)
//       {
//          cout << " ";
//          k = k + 1;
//       }
//       int ch = n - gaps + 1, z = (ch + 1) / 2;
//       while (z > 1)
//       {
//          cout << j;
//          j = j + 1;
//          z = z - 1;
//       }
//       j = j - 1;
//       z = (ch - 1) / 2;
//       cout << (2 * (i - 1)) + 1;

//       while (z >= 1)
//       {

//          cout << j;
//          j = j - 1;
//          z = z - 1;
//       }
//       // k = 1;
//       while (k <= gaps / 2)
//       {
//          cout << " ";
//          k = k + 1;
//       }
//       cout << "\n";
//       i = i + 1;
//    }
// }

/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
// #include <iostream>
// using namespace std;
// void printPatt(int n)
// {
//    int i = 1;
//    while (i <= (n))
//    {
//       int gaps = n - 2 * i + 1, k = 1;
//       if (i > (n + 1) / 2)
//       {
//          int no = (n + 1) / 2;
//          gaps = 2 * (i % no);
//       }
//       while (k <= gaps / 2)
//       {
//          cout << " ";
//          k = k + 1;
//       }
//       //
//       // for(int j=0;j<n-2;j++)
//       // {
//       //    for(int m=0;m<)
//       //    cout<<"*";
//       // }
//       int ch = n - gaps;
//       while (ch >= 1)
//       {
//          cout << "*";
//          ch = ch - 1;
//       }
//       k = 1;
//       while (k <= gaps / 2)
//       {
//          cout << " ";
//          k = k + 1;
//       }
//       cout << "\n";
//       i = i + 1;
//    }
// }
// int main()
// {
//    int n;
//    cin >> n;
//    printPatt(n);
// }
