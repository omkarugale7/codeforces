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
      int n;
      cin >> n;
      int k = 2;
      while (k < n)
      {
         int zz = (1 << k) - 1;
         // cout << zz << endl;
         if (n % zz == 0)
         {
            // cout << zz << " " << n << endl;
            cout << (n / zz) << endl;
            break;
         }
         k++;
      }
   }
   return 0;
}