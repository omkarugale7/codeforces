/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   string base = "qwertyuiopasdfghjkl;zxcvbnm,./";
   char z;
   cin >> z;
   string inp;
   cin >> inp;
   for (int i = 0; i < inp.size(); i++)
   {
      int index = base.find(inp[i]);
      // cout << index<<" " << endl;
      if (z == 'R')
         cout << base[index - 1];
      else
         cout << base[index + 1];
   }

   return 0;
}