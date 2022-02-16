/*Editor: Omkar Ugale
Time : . 10th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    
      int n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
         cin >> a[i];
    int curr =1;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
       if (a[i]>=a[i-1])
       curr++;
       else
       {
          ans = max(ans,curr);
          curr = 1;
       }
    }
          ans = max(ans,curr);
    cout<<ans<<endl;
    
   return 0;
}
