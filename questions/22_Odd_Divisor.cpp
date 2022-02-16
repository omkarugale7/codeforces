/*Editor: Omkar Ugale
Time : . 11th feb 2022 */
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
      bool flag = false;
      while (n >1)
      {
         if (n & 1 != 0)
         {
            cout << "YES" << endl;
            flag = true;
            break;
         }
         n = n >> 1;
      }
      if (!flag)
         cout << "NO" << endl;
   }
   return 0;
}