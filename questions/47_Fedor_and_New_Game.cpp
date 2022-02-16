/*Editor: Omkar Ugale
Time : . 15th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

   int n, m, k;
   cin >> n >> m >> k;
   int arr[m];
   for (int i = 0; i < m; i++)
      cin >> arr[i];
   int com;
   cin >> com;
   int ans = 0;
   for (int i = 0; i < m; i++)
   {
      int comp = com;
      int j = k;
      bool hogakya = true;
      while (comp > 0||arr[i]>0)
      {
         // cout << arr[i] << " " << comp << endl;
         if ((!(comp & 1) && (arr[i] & 1)) || ((comp & 1) && !(arr[i] & 1)))
            j--;
         if (j <  0)
         {
            hogakya = false;
            break;
         }
         arr[i] = arr[i] >> 1, comp /= 2;
         // cout << "k - " << j << endl;
      }
      if (hogakya)
         ans++;
      // cout << "ans - " << ans << endl;
   }
   cout << ans << endl;

   return 0;
}