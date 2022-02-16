/* Editor: Omkar Ugale
Time : .10th Feb 2022 */
#include <bits/stdc++.h>

using namespace std;
int main()
{
   string s;
   cin >> s;
   int i;
   string ans = "", curr = "";
   for (i = 0; i < s.size(); i++)
   {
      curr += s[i];
      if (s[i] == 'B' && s[i - 1] == 'U' && s[i - 2] == 'W')
      {
         curr.pop_back();
         curr.pop_back();
         curr.pop_back();
         if (curr!="")
          cout << curr << " ";
         curr = "";
      }
   }
   if (curr!="WUB")
   cout << curr << " ";
   cout << endl;

   return 0;
}