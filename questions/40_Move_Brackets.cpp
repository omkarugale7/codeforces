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
      string s;
      cin >> s;
      int c = 0, ans = 0;
      for (int i = 0; i < n; i++)
      {
         if (s[i] == '(')
            c++;
         else
            c--;
         if (c < 0)
         {
            c = 0;
            ans++;
         }
         // cout << c<<" "<<ans<< endl;
      }
      cout << ans << endl;
   }
   return 0;
}