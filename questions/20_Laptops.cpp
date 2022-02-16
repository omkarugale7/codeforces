/*Editor: Omkar Ugale
Time : . 11th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool MyComparaterAscending(pair<int, int> p1, pair<int, int> p2)
{
   return p1.first < p2.first;
}
int main()
{

   int n;
   cin >> n;
   vector<pair<int, int>> v;
   for (int i = 0; i < n; i++)
   {
      int a, b;
      cin >> a >> b;
      v.push_back(make_pair(a, b));
   }
   sort(v.begin(), v.end(), MyComparaterAscending);
   // for (int i = 0; i < n; i++)
   // {
   //    cout<<v[i].first<<" "<<v[i].second<<endl;
   // }
   
   bool hai_kya = false;
   for (int i = 0; i < n - 1; i++)
   {
      if (v[i].second > v[i + 1].second)
      {
         hai_kya = true;
         break;
      }
   }
   if (hai_kya)
      cout << "Happy Alex" << endl;
   else
      cout << "Poor Alex" << endl;

   return 0;
}