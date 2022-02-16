/*Editor: Omkar Ugale
Time : .  26th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   ll t;
   cin >> t;
   while (t--)
   {
      ll n;
      cin >> n;
      int arr[n], brr[n];
      for (ll i = 0; i < n; i++)
         cin >> arr[i];
      for (ll i = 0; i < n; i++)
         cin >> brr[i];
      for (ll i = 0; i < n; i++)
      {
         if (brr[i] > arr[i])
            swap(arr[i], brr[i]);
      }
      sort(arr, arr + n);
      sort(brr, brr + n);
      cout << arr[n - 1] * brr[n - 1] << endl;
   }
   return 0;
}