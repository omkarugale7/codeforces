/*Editor: Omkar Ugale
Time : . 14th feb 2022 */
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
      set<int> s;
      map<int, int> m;
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         s.insert(arr[i]);
         m[arr[i]]++;
      }
      int ans = 0;
      for (auto it : m)
      {
         if (it.second > ans)
            ans = it.second;
      }
      int setsize = s.size();
      if (ans != 1)
      {
         if (ans >= setsize)
            cout <<  min(setsize, ans-1) << endl;
         else
            cout << min(setsize - 1, ans) << endl;
      }
      else if (setsize == 1)
         cout << 0 << endl;
      else
         cout << 1 << endl;
   }
   return 0;
}