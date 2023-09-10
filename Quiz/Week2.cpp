#include <iostream>
using namespace std;

void isPowerOfTwo(unsigned int x)
{
   cout << (!(x & (x - 1)));
}
void fun(int &num, int k)
{
   num &= (~(1 << k));
}
int function(int n)
{
   if (n % 4 == 0)
      return 0;
   if (n % 4 == 1)
      return 0;
   if (n % 4 == 2)
      return n + 1;
   else
      return 0;
}
// int function12(unsigned n)
// {
//    if(!isPowerOfTwo(n))return -1;
//    unsi
// }
void bin13(int n) // print binary representation of integer
{
   if (n > 1)
   {
      bin13(n / 2);
   }
   cout << n % 2;
}
bool fun15(int x, int y)
{
   return ((x * y) < 0);
}
int function16(int num)
{
   int count = 0;
   while (num)
   {
      num &= (num - 1);
      count++;
   }
   return count;
}
bool fun17(int x, int y)
{
   return ((x ^ y) < 0);
}
bool function19(int n, int k)
{
   bool bit = n & (1 << k);
   return bit;
}
int main()
{
   int x = 10;
   // int y;
   // cin >> x;
   // cin >> y;
   //  int value = 9 ^ 12 ^ 2 ^ 11 ^ 2 ^ 2 ^ 10 ^ 9 ^ 12 ^ 10 ^ 9 ^ 11 ^ 12;
   //  unsigned int x;
   //  cin >> x;
   //  isPowerOfTwo(x);
   //  int num;
   //  cin >> num;
   //  int k = 1;
   //  fun(num, k);
   //  cout << num << endl;
   //  x = (x << 1) + x + (x >> 1);
   //  int value = function(num);
   //  cout << value;
   //  bin13(num);
   //  bool value = fun15(x, y);
   //  cout << value;
   //  int value = function16(num);
   //  int value = fun17(x, y);
   //  int value = function19(x, y);
   //  cout << value;
   //  if (~0 == 1)
   //     cout << "Yes";
   //  else
   //     cout << "No";
   char y = 'a';
   x = x + y;
   cout << x;

   return 0;
}