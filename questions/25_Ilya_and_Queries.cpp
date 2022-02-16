/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   string s;
   cin >> s;
   int cnt[s.size()] = {0}, z = 0;
   for (int i = 1; i < s.size(); i++)
   {
      if (s[i] == s[i - 1])
         z++;
      cnt[i] = z;
   }
    int t;
   cin >> t;
   while (t--)
   {
      int l, r;
      cin >> l >> r;
      cout << cnt[r - 1] - cnt[l - 1] << endl;
   }
   return 0;
}