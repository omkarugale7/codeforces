/*Editor: Omkar Ugale
Time : . 10th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

   int m, n;
   cin >>m>> n;
   int arr[n];
   for (int i = 0; i < n; i++)
      cin >> arr[i];
   int ans = INT_MAX;
   sort(arr, arr + n);
   for (int i = 0; i <= n - m; i++)
      ans = min(ans, arr[i + m - 1] - arr[i]);
      cout<<ans<<endl;

   return 0;
}