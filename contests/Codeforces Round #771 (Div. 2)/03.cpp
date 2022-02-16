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
      int ans = 0;
      int curr = 1;
      for (int i = 0; i < n; i++)
      {
         curr = max(curr, arr[i]);
         if (i + 1 == curr)
         {
            ans++;
         } 
      }
      cout << ans << endl;
   }
   return 0;
}