/* Editor: Omkar Ugale
Time : .10th Feb 2022 */
#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n, k;
   cin >> n >> k;
   int arr[n];
   for (int i = 0; i < n; i++)
      cin >> arr[i];
   int sum = 0, ans = INT_MAX, finans;
   int z = k;
   while (z--)
      sum += arr[z];
   for (int i = 0; i <= n - k; i++)
   {
      ans = min(ans, sum);
      if (ans == sum)
         finans = i;
      sum = sum-arr[i]+arr[i+k];
   }
   cout << finans + 1 << endl;
   return 0;
}