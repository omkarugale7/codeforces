/*Editor: Omkar Ugale
Time : . 15th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      ll a, b, x, y, n;
      cin >> a >> b >> x >> y >> n;
      if (a >= b)
      {
         while (n && b)
         {
            if (b == y)
               break;
            n--, b--;
         }
         while (n && a)
         {
            if (a == x)
               break;
            n--, a--;
         }
         cout << a << " " << b << endl;
         cout << a * b << endl;
      }
      else
      {
         while (n && a)
         {
            if (a == x)
               break;
            n--, a--;
         }
         while (n && b)
         {
            if (b == y)
               break;
            n--, b--;
         }
         cout << a << " " << b << endl;
         cout << a * b << endl;
      }
   }
   return 0;
}