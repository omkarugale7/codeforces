/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
         bool ans = true;
      for (int i = 1; i < n; i++)
      {
          if (arr[i]<arr[i-1])
          {
             ans = false;
             break;
          }
          
      }
      if (ans)
     cout<<"NO"<<endl;
     else
     cout<<"YES"<<endl;
      
   }
   return 0;
}