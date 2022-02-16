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
      int n, k;
      cin >> n >> k;
      int l = 1, r = k,j;
      while (k / n > 0)
      {
         int j = (k / n) - (l / n);
         if (!j)
         break;         
         l = k;
         k = l + j; 
      }
      cout << k << endl;
   }
   return 0;
}