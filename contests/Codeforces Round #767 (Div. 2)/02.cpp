/*Editor: Omkar Ugale
Time : .  22nd jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int l, r, k, ans = 0;
      cin >> l >> r >> k;
      int snd = (r - l) / 2;
      if (l % 2 != 0 || r % 2 != 0)
         snd++;
      if (l == r && l > 1)
         cout << "YES" << endl;
      else if (snd <= k)
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   return 0;
}