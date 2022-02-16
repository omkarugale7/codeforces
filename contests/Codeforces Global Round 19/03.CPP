/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      ll n;
      cin >> n;
      ll arr[n];
      bool ans = false;
      cin >> arr[0];
      ll cnt = 0, ods = 0, evn = 0;
      for (int i = 1; i < n - 1; i++)
      {
         cin >> arr[i];
         if (arr[i] > 1)
             ans = true;
         if (arr[i] % 2)
            ods++;
         cnt += arr[i];
      }
      cin >> arr[n - 1]; 
      if (n == 3 && ((arr[1] % 2) != 0))
      {
         ans = false;
      }
      if (ans)
         cout << (cnt + ods) / 2 << endl;
      else
         cout << "-1" << endl;
   }
   return 0;
}