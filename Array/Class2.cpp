#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void printArray(int arr[][3], int row, int col)
{
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }
}
void searchArray(int arr[4][3], int row, int col, int target)
{
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         if (arr[i][j] == target)
         {
            cout << "Found";
            return;
         }
      }
   }
   cout << "Not Found";
}
void maximumArrayElement(int arr[][3], int row, int col)
{
   int max_Array_Element = INT_MIN;
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         if (arr[i][j] > max_Array_Element)
         {
            max_Array_Element = arr[i][j];
         }
      }
   }
   cout << max_Array_Element;
}
void minimumArrayElement(int arr[][3], int row, int col)
{
   int min_Array_Element = INT_MAX;
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         if (arr[i][j] < min_Array_Element)
         {
            min_Array_Element = arr[i][j];
         }
      }
   }
   cout << min_Array_Element;
}
void rowWiseSum(int arr[][3], int row, int col)
{
   for (int i = 0; i < row; i++)
   {
      int sum = 0;

      for (int j = 0; j < col; j++)
      {
         sum = arr[i][j] + sum;
      }
      cout << "Sum of " << i + 1 << " row is :- " << sum << endl;
   }
}
void colWiseSum(int arr[][3], int row, int col)
{
   for (int i = 0; i < col; i++)
   {
      int sum = 0;

      for (int j = 0; j < row; j++)
      {
         sum = arr[j][i] + sum;
      }
      cout << "Sum of " << i + 1 << " row is :- " << sum << endl;
   }
}
void diagnolWiseSum(int arr[][3], int row, int col)
{
   if (row != col)
   {
      cout << "It's not a square matrix, can't find diagnol sum for this ";
      return;
   }
   int i = 0;
   int sum = 0;

   while (i < col)
   {
      sum = arr[i][i] + sum;
      i++;
   }
   cout << "Sum of diagnol :- " << sum << endl;
}
void reverseDiagnolWiseSum(int arr[][4], int row, int col)
{
   int sum = 0;
   if (row != col)
   {
      cout << "It's not a square matrix, can't find diagnol sum for this ";
      return;
   }
   for (int i = 0, j = col - 1; i < col; i++, j--)
   {

      sum = arr[i][j] + sum;
   }
   cout << "Sum of reverse diagnol is :- " << sum << endl;
}
void transposeOfMatrix(int arr[][3], int row, int col)
{
   // for (int i = 0; i < row - 1; i++)   //Using above triangle
   // {
   //    for (int j = i; j < col; j++)
   //    {
   //       swap(arr[i][j], arr[j][i]);
   //    }
   // }
   // printArray(arr, row, col);

   for (int i = 0; i < row; i++) // Using below triangle
   {
      for (int j = 0; j < i + 1; j++)
      {
         swap(arr[i][j], arr[j][i]);
      }
   }
   printArray(arr, row, col);
}
void printing2DVectorArray() {}

int main()
{
   // int arr[3][3] = {
   //     {1, 4, 7},
   //     {2, 5, 8},
   //     {3, 6, 9}};
   // int row = 3;
   // int col = 3;
   // int target;
   // cin >> target;
   // vector<int> vec(5, 101); // siz=5,capacity =5 , all 5 valuses got initilised with 101
   // vector<int> v(8);
   // vector<int> ve;
   // // cout << sizeof(ve);
   // cout << endl
   //      << v.size();

   // cout << endl
   //      << v.capacity();
   // v.push_back(16);
   // cout << endl
   //      << v.size();

   // cout << endl
   //      << v.capacity();

   // cout << endl
   //      << "Printing the values present in vector" << endl;
   // for (int i = 0; i < v.size(); i++)
   // {
   //    cout << v[i] << " ";
   // }
   // cout << endl;

   //<< capacity(v);

   // vector<vector<int>> arr(10, vector<int>(8, 108)); // 2D vector array , row =10 ,col=8 ,with the every element initialisation value of 108
   // cout << arr.size() << endl;
   // for (int i = 0; i < arr.size(); i++)
   // {
   //    for (int j = 0; j < arr[i].size(); j++)
   //    {
   //       cout << arr[i][j] << " ";
   //    }
   //    cout << arr[i].size();

   //    cout << endl;
   // }

   // Jagged Array
   vector<vector<int>> brr;

   vector<int> vect1(12, 90);
   vector<int> vect2(17, 98);
   vector<int> vect3(90, 90);
   vector<int> vect4(8, 50);
   vector<int> vect5(89, 87);

   brr.push_back(vect1);
   brr.push_back(vect2);
   brr.push_back(vect3);
   brr.push_back(vect4);
   brr.push_back(vect5);

   for (int i = 0; i < brr.size(); i++)
   {
      for (int j = 0; j < brr[i].size(); j++)
      {
         cout << brr[i][j] << " ";
      }
      cout << brr[i].size();

      cout << endl;
   }

   // printing2DVectorArray(arr);
   // printArray(v, row, col);
   // searchArray(arr, row, col, target);
   // maximumArrayElement(arr, row, col);
   // minimumArrayElement(arr, row, col);
   // rowWiseSum(arr, row, col);
   // colWiseSum(arr, row, col);
   // diagnolWiseSum(arr, row, col);
   // reverseDiagnolWiseSum(arr, row, col);
   // transposeOfMatrix(arr, row, col);
   return 0;
}
