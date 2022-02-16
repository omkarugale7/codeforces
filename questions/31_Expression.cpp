/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int a, b, c;
   cin >> a >> b >> c;
   int d[6] = {0};
   d[0] = a + b + c;
   d[1] = a + b * c;
   d[2] = a * b + c;
   d[3] = a * (b + c);
   d[4] = (a + b) * c;
   d[5] = a * b * c;
   sort(d, d + 6); 
   cout << d[5] << endl;
   return 0;
}