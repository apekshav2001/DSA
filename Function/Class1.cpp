#include <iostream>
using namespace std;
void printSumOf3Num(int num1, int num2, int num3)
{
   int ans = num1 + num2 + num3;
   cout << "Sum of given three number is :- " << ans << endl;
}
int returnSumOf3Num(int num1, int num2, int num3)
{
   int sum = num1 + num2 + num3;
   return sum;
}
void findMaxOf3Num(int num1, int num2, int num3)
{
   if ((num1 >= num2) && (num1 >= num3))
      cout << "Maximum number is :- " << num1 << endl;
   else if ((num2 >= num1) && (num2 >= num3))
      cout << "Maximum number is :- " << num2 << endl;
   else
      cout << "Maximum number is :- " << num3 << endl;
}
void findMaxOf3NumUsingMax(int num1, int num2, int num3)
{
   int temp = max(num1, num2);
   int maximum = max(temp, num3);
   cout << "Maximum number is :- " << maximum;
}
void printCountingFrom1Tonum(int num)
{
   for (int i = 0; i < num; i++)
   {
      cout << i + 1 << endl;
   }
}
void checkPrimeOrNot(int num)
{
   if (num == 1)
   {
      cout << num << " is Not a Prime Number " << endl;
      return;
   }

   for (int i = 2; i < num; i++)
   {

      if (num % i == 0)
      {
         cout << num << " is Not a Prime Number " << endl;
         return;
      }
   }
   cout << num << " is a Prime Number " << endl;
}

void checkEvenOrOdd(int num)
{
   if (num % 2 == 0)
   {
      cout << num << " is an Even Number " << endl;
   }
   else
   {
      cout << num << " is a Odd Number " << endl;
   }
}

void sumOfAllNumberUptoNum(int num)
{
   int sum = 0;
   for (int i = 0; i <= num; i++)
   {
      sum = sum + i;
   }
   cout << "Sum of all Numbers upto N is :- " << sum << endl;
}
void sumOfAllEvenNumberUptoNum(int num) // Bad Practice - if(num%2==0) ? why ?
{
   int sum = 0;
   for (int i = 2; i <= num; i = i + 2)
   {
      sum = sum + i;
   }
   cout << "Sum of all Numbers upto N is :- " << sum << endl;
}

int main()
{
   // int num1, num2, num3;
   int num;
   cout << "Enter the value of N :- ";
   cin >> num;
   // cout << "Enter number 1 :- ";
   // cin >> num1;
   // cout << endl
   //      << "Enter number 2 :- ";
   // cin >> num2;
   // cout << endl
   //      << "Enter number 3 :- ";
   // cin >> num3;
   // printSumOf3Num(num1, num2, num3);
   // int ans = returnSumOf3Num(num1, num2, num3);
   // cout << "Sum of given three number is :- " << ans << endl;
   // findMaxOf3Num(num1, num2, num3);
   // findMaxOf3NumUsingMax(num1, num2, num3);
   // printCountingFrom1Tonum(num);
   // checkPrimeOrNot(num);
   // checkEvenOrOdd(num);
   // sumOfAllNumberUptoNum(num);
   // sumOfAllEvenNumberUptoNum(num);
   return 0;
}