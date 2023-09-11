#include <iostream>
#include <queue>
using namespace std;

int main()
{
   int arr[6] = {9, 67, 90, 76, 33, 20};
   // defining priority queue
   priority_queue<int> maxi;
   priority_queue<int, vector<int>, greater<int>> mini;

   // printing array
   cout << "Array : ";
   for (auto i : arr)
   {
      cout << i << " ";
   }
   cout << endl;

   // pushing array sequentially one by one
   for (int i = 0; i < 6; i++)
   {
      maxi.push(arr[i]);
   }
   // printing priority queue
   cout << "Priority Queue :";
   while (!maxi.empty())
   {
      cout << maxi.top() << " ";
      maxi.pop();
   }
   cout << endl;

   mini.push(89);
   mini.push(65);
   mini.push(32);
   mini.push(48);
   mini.push(9);
   mini.push(65);

   int m = mini.size();
   for (int i = 0; i < m; i++)
   {
      cout << " " << mini.top();
      mini.pop();
   }
   cout << endl;
   cout << "Empty :- " << mini.empty();
   return 0;
}