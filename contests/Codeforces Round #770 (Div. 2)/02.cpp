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
      ll n, x, y;
      cin >> n >> x >> y;
      ll arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      if ((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0))
         cout << "Alice" << endl;
      else
         cout << "Bob" << endl;
   }
   return 0;
}