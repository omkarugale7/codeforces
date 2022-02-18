/*Editor: Omkar Ugale
Time : . 15th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int x ,y;
      cin>>x>>y;
      int a,b;
      cin>>a>>b;
      if (a*2<b)
      {
         cout<<(x+y)*a<<endl;
      }
      else
      cout<<min(x,y)*b+a*(max(x,y)-min(x,y))<<endl;
      
   }
   return 0;
}