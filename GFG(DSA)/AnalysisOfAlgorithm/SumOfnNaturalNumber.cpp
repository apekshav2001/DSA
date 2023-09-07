#include <iostream>
using namespace std;
int sumofnaturalnumber(int n, int sum)
{
   for (int i = 0; n >= i; i++)
   {
      sum = sum + i;
   }
   return sum;
}

int main()
{
   int no;
   cout << "Enter the value till that you want sum ";
   cin >> no;
   int result = sumofnaturalnumber(no, 0);
   cout << result;
}