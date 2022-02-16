/*Editor: Omkar Ugale
Time : . 14th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      int leftindex = 0, rightindex = 0;
      for (int i = 0; i < n; i++)
      {
         // cout << i << endl;
         if (arr[i] != i + 1)
         {
            leftindex = i;
            for (int j = i + 1; j < n; j++)
            {
               if (arr[j] == i + 1)
               {
                  rightindex = j;
                  break;
               }
            }
            break;
         }
      }
      while (leftindex < rightindex)
      {
         swap(arr[leftindex], arr[rightindex]);
         leftindex++, rightindex--;
      }
      for (int i = 0; i < n; i++)
      {
         cout << arr[i] << " ";
      }
      cout << endl;
   }
   return 0;
}