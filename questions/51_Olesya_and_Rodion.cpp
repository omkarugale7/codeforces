/*Editor: Omkar Ugale
Time : . 15th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   ll n, t;
   cin >> n >> t;
   string s;
   if (n == 1 && t == 10)
      cout << "-1" << endl;
   else if (t == 10)
   {
      s += "1";
      for (int i = 1; i < n; i++)
      {
         string temp = "0";
         s += temp;
      }
   }
   else

   {
      for (int i = 1; i <= n; i++)
      {
         string temp = to_string(t);
         s += temp;
      }
   }
   cout << s << endl;
   return 0;
}