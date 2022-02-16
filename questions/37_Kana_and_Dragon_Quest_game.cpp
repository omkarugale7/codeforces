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
      int x, n, m;
      cin >> x >> n >> m;
      bool hogaya = false;
      while (n--)
      {
         if (((x / 2) + 10) > x)
            break;
         x = (x / 2) + 10;
         if (x <= 0)
         {
            hogaya = true;
            break;
         }
      }
      while (m--)
      {
         x -= 10;
         if (x <= 0)
         {
            hogaya = true;
            break;
         }
      }
      if (hogaya)
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   return 0;
}