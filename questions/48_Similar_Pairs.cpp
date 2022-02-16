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
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      sort(arr, arr + n);
      vector<pair<int, int>> diffone;
      for (int i = 1; i < n; i++)
      {
         if (arr[i] - arr[i - 1] == 1)
         {
            diffone.push_back({arr[i], arr[i - 1]});
            i++;
         }
      }
      int od = 0, ev = 0;
      for (int i = 0; i < n; i++)
      {
         if (arr[i] % 2)
            od++;
         else
            ev++;
      }
      int ans = od/2 + ev/2 + diffone.size();
      if (n<=ans*2)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
      
   }
   return 0;
}