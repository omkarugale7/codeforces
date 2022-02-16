/*Editor: Omkar Ugale
Time : . 10th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   string s;
   cin >> s;
   string ans = "";
   transform(s.begin(), s.end(), s.begin(), ::tolower);
   for (int i = 0; i < s.size(); i++)
   {
      if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      continue;
      else
      {
         ans+=".";
         ans+=s[i];
      }
      
   }
   cout<<ans<<endl;

   return 0;
}