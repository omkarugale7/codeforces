/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int n, m;
   cin >> n >> m;
   int arr[n];
   for (int i = 0; i < n; i++)   
      cin >> arr[i];
   sort(arr, arr + n);
   int ans = 0;
   for (int i = 0; i < m; i++)
   {
      if (arr[i]>0)
      break;
      ans += arr[i];
   }
   cout << 0 - ans << endl;
   return 0;
}