/*Editor: Omkar Ugale
Time : . 11th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

   int n, i, j;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
      cin >> arr[i];
   int brr[n - 1];
   for (int i = 0; i < n - 1; i++)
      cin >> brr[i];
   int crr[n - 2];
   for (int i = 0; i < n - 2; i++)
      cin >> crr[i];
   sort(arr, arr + n);
   sort(brr, brr + n - 1);
   sort(crr, crr + n - 2);
   for (i = 0; i < n; i++)
   {
      // cout<<arr[i]<<" "<<brr[i]<<endl;
      if (arr[i] != brr[i])
      {
         cout << arr[i] << endl;
         break;
      }
   }
   for (i = 0; i < n - 1; i++)
   {
      // cout<<arr[i]<<" "<<brr[i]<<endl;
      if (brr[i] != crr[i])
      {
         // cout<<i<<endl;
         cout << brr[i] << endl;
         break;
      }
   }

   return 0;
}
// /*Editor: Omkar Ugale
// Time : . 11th feb 2022 */
// #include <bits/stdc++.h>

// using namespace std;
// typedef long long int ll;
// int main()
// {
    
//       int n;
//       cin >> n;
//       int arr[n];
//       int suma = 0, sumb = 0, sumc = 0;
//       for (int i = 0; i < n; i++)
//       {
//          cin >> arr[i];
//          suma += arr[i];
//       }
//       int brr[n - 1];
//       for (int i = 0; i < n - 1; i++)
//       {
//          cin >> brr[i];
//          sumb += brr[i];
//       }
//       int crr[n - 2];
//       for (int i = 0; i < n - 2; i++)
//       {
//          cin >> crr[i];
//          sumc+=crr[i];
//       }
//       cout<<suma-sumb<<endl;
//       cout<<sumb-sumc<<endl;
    
//    return 0;
// }