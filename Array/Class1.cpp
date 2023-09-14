#include <iostream>
#include <limits.h>
using namespace std;
// int inputElementOfAnArray(int arr[],int size)
// {
//    cout << "Enter the Elements of Array :- ";

//    for (int i = 0; i < size; i++)
//    {
//       cin >> arr[i];
//    }
//    return arr;

// }
void printDoubleValueArrayElement(int arr[], int size)
{
   cout << "Enter the Elements of Array :- ";

   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   cout << "Double value of every element of an array :- ";
   for (int i = 0; i < size; i++)
   {
      arr[i] = arr[i] * 2;
      cout << arr[i] << " ";
   }
}
void printSumOfEveryArrayElement(int arr[], int size)
{
   cout << endl
        << "Enter the Elements of Array :- ";

   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   int sum = 0;
   cout
       << "Sum of every element of an array :- ";
   for (int i = 0; i < size; i++)
   {
      sum = arr[i] + sum;
   }
   cout << sum << " ";
}
bool linearSearch(int arr[], int size)
{
   cout << endl
        << "Enter the Elements of Array :- ";

   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   int target;
   cout << "Enter the Value that is need to be searched :- ";
   cin >> target;
   for (int j = 0; j < size; j++)
   {
      if (arr[j] == target)
      {
         return true;
         // cout << target << " is Found ";
         // return; /// Should I use flag or this ? which one is better ?
      }
   }
   return false;
}

void countNumberOf0and1(bool brr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cin >> brr[i];
   }
   int count = 0;
   for (int i = 0; i < size; i++)
   {
      if (brr[i] == 0)
      {
         count++;
      }
   }
   cout << "Number of 0's in given Array is :- " << count << endl;
   cout << "Number of 1's in given Array is :- " << (size - count) << endl;
}
void findMin(int arr[], int size)
{
   int minAns = INT_MAX;
   // int ans;
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   for (int i = 0; i < size; i++)
   {

      // if ( arr[i]<minAns)
      // {
      //    minAns = arr[i];
      // }
      minAns = min(arr[i], minAns);
   }

   cout << minAns << endl;
}
void reverse(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   int left = 0;
   int right = size - 1;
   while (left <= right)
   {
      swap(arr[left], arr[right]);
      left++;
      right--;
   }

   // for (int i = 0; i < size / 2; i++)
   // {

   //    swap(arr[i], arr[size - i - 1]);

   // }
   for (int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
}
void printExtreme(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }

   // for (int i = 0; i <= size / 2; i++)
   // {
   //    cout << arr[i] << " " << arr[size - i - 1] << " ";
   // }
   int left = 0;
   int right = size - 1;
   // if ((size & 1) == 0)
   while (left <= right)
   {
      if (left == right)
      {
         cout << arr[left];
         return;
      }

      cout << arr[left] << " " << arr[right] << " ";
      left++;
      right--;
   }
}

int main()
{
   int arr[5];
   // bool brr[15];
   int size = 5;
   // printDoubleValueArrayElement(arr, size);
   // printSumOfEveryArrayElement(arr, size);
   // bool ans = linearSearch(arr, size);
   // if (ans)
   // {
   //    cout << " Found";
   // }
   // else
   // {
   //    cout << "Not Found";
   // }
   // countNumberOf0and1(brr, size);
   // findMin(arr, size);
   // reverse(arr, size);
   // printExtreme(arr, size);
   //  int brr[...] = inputElementOfAnArray(arr,size);
   return 0;
}