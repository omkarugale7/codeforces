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
      vector<int> odd;
      vector<int> even;
      for (int i = 0; i < n; i++)
      {
         int k;
         cin >> k;
         if (k % 2)
            odd.push_back(k);
         else
            even.push_back(k);
      }
      bool hai = true;
      for (int i = 1; i < odd.size(); i++)
      {
         if (odd[i] < odd[i - 1])
         {
            hai = false;
            break;
         }
      }
      for (int i = 1; i < even.size(); i++)
      {
         if (even[i] < even[i - 1])
         {
            hai = false;
            break;
         }
      }
      if (hai)
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   return 0;
}