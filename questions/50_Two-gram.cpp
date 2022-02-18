/*Editor: Omkar Ugale
Time : . 16th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   string s;
   cin >> s;
   map<string, int> m;
   for (int i = 0; i < t - 1; i++)
   {
      string temp = s.substr(i, 2);
      // cout<<temp<<endl;
      m[temp]++;
   }
   int a = 0;
   string ans;
   for(auto it:m)
   {
       a=max(a,it.second);
       if (a==it.second)
       ans=it.first;
   }
   cout<<ans<<endl;

   return 0;
}