/*Editor: Omkar Ugale
Time : . 14th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   ll t;
   cin >> t;
   while (t--)
   {
      ll n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      sort(arr, arr + n);
      ll ans = 1;
      for (int i = n - 1; i >= n - 5; i--)
         ans *= arr[i];
      ll bns = arr[0] * arr[1];
      for (int i = n - 1; i >= n - 3; i--)
      {
         // cout<<bns<<endl;
         bns *= arr[i];
      }
      // cout << bns << endl;
      ll cns = arr[n - 1];
      for (int i = 0; i < 4; i++)
         cns *= arr[i];
      cout << max(ans, max(bns, cns)) << endl;
   }
   return 0;
}