/*Editor: Omkar Ugale
Time : .  22nd jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool MyComparaterAscending(pair<int, int> p1, pair<int, int> p2)
{
   return p1.first < p2.first;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, m;
      cin >> n >> m;
      vector<pair<int, int>> v;
      int a[n],b[n];
     for (ll i = 0; i < n; i++)
      {
         cin >> a[i];
      }
      for (ll i = 0; i < n; i++)
      {
         cin >> b[i];
      }
      for (ll i = 0; i < n; i++)
      {
         v.push_back(make_pair(a[i], b[i]));
      }
      sort(v.begin(), v.end());
      // for (int i = 0; i < n; i++)
      // {
      //    cout << v[i].first << " " << v[i].second << endl;
      // }

      int i = 0;
      while (m >= v[i].first && i < n)
      {
         m += v[i].second;
         i++;
         // cout << m << " " << v[i].second << endl;
      }
      // if (i<n )
      // {
      //   m+=v[i].second;;
      // }

      // cout << endl;
      cout << m << endl;
   }
   return 0;
}