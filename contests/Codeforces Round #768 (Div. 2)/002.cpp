/*Editor: Omkar Ugale
Time : .  27th jan 2022 */
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
      int ans = 0, value = arr[n - 1], size = 1, j = n - 2;
      while (j >= 0)
      {
         while (j >= 0 && arr[j] == value)
         {
            size++;
            j--;
         }
         if (j < 0)
            break;
         ans++;
         j -= size;
         size *= 2;
      }
      cout << ans << endl;
   }
   return 0;
}