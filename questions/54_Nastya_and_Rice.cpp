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
      int n, a, b, c, d;
      cin >> n >> a >> b >> c >> d;

      if ((n * (a + b) >= (c - d)) && (n * (a - b) <= (c + d)))
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   return 0;
}