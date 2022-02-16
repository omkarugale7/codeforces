/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
      cin >> arr[i];
   int m;
   cin >> m;
   int brr[m];
   for (int i = 0; i < m; i++)
      cin >> brr[i];
   sort(arr, arr + n);
   sort(brr, brr + m);
   int i = 0, j = 0, cnt = 0;
   while (i < n && j < m)
   {
      // cout << i << " " << j << endl;
      // cout << arr[i] << " " << brr[j] << endl;
      if (abs(arr[i] - brr[j]) < 2)
      {
         cnt++;
         i++, j++;
      }
      else if (arr[i] < brr[j])
         i++;
      else
         j++;
   }
   cout << cnt << endl;

   return 0;
}