
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;

int main()
{
   int t = 0;
   cin >> t;
   for (int _ = 0; _ < t; _++)
   {
      ll n, k;
      vector<pair<ll, ll>> r;
      cin >> n >> k;
      ll a[n], b[n];
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
         r.push_back(make_pair(a[i], b[i]));
      }

      sort(r.begin(), r.end());

      for (ll i = 0; i < n; i++)
      {
         if (r[i].first <= k)
         {
            k += r[i].second;
         }
         else
         {
            break;
         }
      }
      cout << k << endl;
   }
   return 0;
}