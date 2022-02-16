/*Editor: Omkar Ugale
Time : .  26th jan 2022 */
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
      map<int, int> a;
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         a[arr[i]]++;
      }
      int num = 0, ans = 0, count = 0;
      for (auto &it : a)
      {
         num = max(num, it.second);
         if (num == it.second)
         {
            ans = it.first;
         }
      }
      int k = n - num;
      while (k)
      {
         if (k & 1)
            count++;
      }
      cout << count << endl;
   }
   return 0;
}