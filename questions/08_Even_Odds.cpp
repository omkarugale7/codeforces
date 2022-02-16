/*Editor: Omkar Ugale
Time : . 10th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int n, k;
   cin >> n >> k;
   if (((n + 1) / 2) >= k)
      cout << (2 * k - 1) << endl;
   else
      cout << (k - ((n + 1) / 2)) * 2 << endl;

   return 0;
}