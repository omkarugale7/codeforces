/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int n, m;
   cin >> n >> m;
   map<int, int> ma;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      int k;
      cin >> k;
      arr[i] = k;
      ma[k]++;
   }
   int brr[n];
   for (int i = 0; i < n; i++)
   {
      brr[i] = ma.size();
      ma[arr[i]]--;
      if (!ma[arr[i]])
         ma.erase(arr[i]);
   }
   for (int i = 0; i < m; i++)
   {
      int k;
      cin >> k;
      cout << brr[k - 1] << endl;
   }

   return 0;
}