/*Editor: Omkar Ugale
Time : . 17th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int n, x, ans = 0;
   cin >> n >> x;
   for (int i = 1; i <= min(n, (int)sqrt(x)); i++)
   {
      if (x % i == 0 && x / i <= n)
      {
         if(i!=x/i)
         ans += 2;
         else
         ans+=1;
      }
      // cout<<i<<" "<<x/i<<endl;
   }
   cout << ans << endl;

   return 0;
}