/*Editor: Omkar Ugale
Time : . 10th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    
      int n, m;
      cin >> n >> m;
      int k = n % (m - 1);
      if (k == 0)
         cout << n + (n /( m-1)) - 1 << endl;
      else
         cout << n + (n / (m-1)) << endl;
    
   return 0;
}