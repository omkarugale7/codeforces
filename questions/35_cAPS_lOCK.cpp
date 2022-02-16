/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   string s;
   cin >> s;
   bool firstwala = false;
   if (s[0] >= 65 && s[0] <= 90)
      firstwala = true;
   bool bakikecapshaikya = true;
   for (int i = 1; i < s.size(); i++)
   {
      if (s[i] < 65 || s[i] > 90)
         bakikecapshaikya = false;
   }
   // cout<<bakikecapshaikya<<endl;
   // cout<<s<<endl;
   if (bakikecapshaikya)
   {
      if (firstwala)
         cout << char(s[0] + 32);
      else
         cout << char(s[0] - 32);
      for (int i = 1; i < s.size(); i++)
         cout << char(s[i] + 32);
   }
   else
      cout << s << endl;

   return 0;
}