/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int cnt(int arr[], int l, int r, int n)
{
   int z = 0;
   for (int i = l; i <= r; i++)
   {
      if (!arr[i])
         arr[i] = 1;
         else arr[i]=0;
   }
   for (int i = 0; i < n; i++)
   {
      if (arr[i])
         z++;
      // cout << arr[i] << " ";
   }
   // cout << endl;
   // cout << l << " " << r << endl;
   // cout << z << endl;
   return z;
}
void copyarray(int arr[], int brr[], int n)
{
   for (int i = 0; i < n; i++)
      brr[i] = arr[i];
}
int main()
{
   int n;
   cin >> n;
   int arr[n], ans = 0;
   for (int i = 0; i < n; i++)
      cin >> arr[i];
   for (int i = 0; i < n; i++)
   {
      int brr[n];
      for (int j = i; j < n; j++)
      {
         copyarray(arr, brr, n);
         ans = max(ans, cnt(brr, i, j, n));
      }
   }
   cout << ans << endl;
   return 0;
}