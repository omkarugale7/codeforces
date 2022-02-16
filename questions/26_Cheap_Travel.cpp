/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int n, m, a, b;
   cin >> n >> m >> a >> b;
   if (m >= n)
      cout << min(n * a, b) << endl;
   else if (m * a <= b)
      cout << n * a;
   else
   {
      int ans = 0;
      if (m % n == 0)
         ans = (n / m) * b;
      else
      {
         ans = ((n / m) + 1) * b;
         ans = min(ans, ((n / m) * b + (n % m) * a));
      }
      cout << ans << endl;
   }
   return 0;
}