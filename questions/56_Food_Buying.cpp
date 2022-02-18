/*Editor: Omkar Ugale
Time : . 17th feb 2022 */
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
      int ans = 0;
      do
      {
         ans += n - n % 10;
         n = n % 10 + n / 10;
      } while (n / 10 > 0);
      ans += n % 10;
      cout << ans << endl;
   }
   return 0;
}