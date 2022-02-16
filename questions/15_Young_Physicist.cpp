/*Editor: Omkar Ugale
Time : . 10th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
  
      int n;
      cin >> n;
      int x = 0, y = 0, z = 0;
      for (int i = 0; i < n; i++)
      {
         int xx, yy, zz;
         cin >> xx >> yy >> zz;
         x += xx, y += yy, z += zz;
      }
      if (!x&&!y&&!z)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
      
  
   return 0;
}