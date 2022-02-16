/*Editor: Omkar Ugale
Time : . 14th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int a, b;
   cin >> a >> b;
   int k = a;
   while (a > 1)
   {
      int z = a % b;
      a = a / b;
      k += a;
      a  += z;
      // cout << k << " " << a<<" "<<z << endl;
      if (a/b==0)
      break;
      
   }
   cout << k << endl;

   return 0;
}