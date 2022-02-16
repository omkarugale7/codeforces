/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool ascendingOrder(pair<int, int> a, pair<int, int> b)
{
   return a.first < b.first;
}
int main()
{
   int s, n;
   cin >> s >> n;
   vector<pair<int, int>> v;
   for (int i = 0; i < n; i++)
   {
      int a, b;
      cin >> a >> b;
      v.push_back(make_pair(a, b));
   }
   sort(v.begin(), v.end(), ascendingOrder);
   bool jhala = true;
   for (int i = 0; i < n; i++)
   {
      if (s > v[i].first)
         s += v[i].second;
      else
      {
         jhala = false;
         break;
      }
   }
   if (jhala)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
   

   return 0;
}