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
      int n,k;
      cin >> n>>k;
       string s;
       cin>>s;
       int ans = 1;
       while (k--)
       {
          string k = s;
          reverse(k.begin() , k.end());
         //  cout<<s<<" "<<k<<endl;
           if (s!=k)
          {
             s+=k;
             ans++;
          }
          else
          {
             break;
          }
           
       }
       cout<<ans<<endl;
   }
   return 0;
}