/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int MEX(int arr[], int n)
{
   set<int> abhijit;
   for (int i = 0; i < n; i++)
   {
      abhijit.insert(arr[i]);
   }
   int sudesh = 0;
   for (auto it : abhijit)
   {
      if (sudesh != it)
         return sudesh;
      sudesh++;
   }
   return n;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int i, j, n, s = 0, k;
      cin >> n;
      int a[n];
      for (i = 0; i < n; i++)
         cin >> a[i];
      for (int len = 1; len <= n; len++)
      {
         for (i = 0, j = len - 1; j < n; j++, i++)
         {
            int f = 0;
            for (k = i; k <= j; k++)
               if (a[k] == 0)
                  f++;
            s += len;
            s += f;
         }
      }
      cout << s << "\n";
   }
   return 0;
}