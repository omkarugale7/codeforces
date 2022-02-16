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
      int n, a, b;
      cin >> n >> a >> b;
      for (int i = 0; i < n; i++)
      {
         char z = ('a' + (i % b));
         cout << z;
      }
      cout<<endl;
   }
   return 0;
}