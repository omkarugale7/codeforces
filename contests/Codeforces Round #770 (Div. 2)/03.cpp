/*Editor: Omkar Ugale
Time : . 6th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k;
      cin >> n >> k;
      if (k == 1)
      {
         cout << "YES" << endl;
         for (int i = 1; i <= n; i++)
         {
            cout << i << endl;
         }
      }
      else if (n % 2 == 1)
         cout << "NO" << endl;
      else if (n % 2 == 0)
      {
         cout<<"YES"<<endl;
         int i = 2;
         int j = 1;
         while (n > 0)
         {
            int z = k;
            while (z--)
            {
               cout << j << " ";
               j += 2;
            }
            cout << endl;
            n--;
            if (!n)
               break;
             z = k;
            while (z--)
            {
               cout << i << " ";
               i += 2;
            }
            cout << endl;
            n--;
            if (!n)
               break;
         }
      }
   }
   return 0;
}