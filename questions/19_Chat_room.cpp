/* Editor: Omkar Ugale
Time : .11th Feb 2022 */
#include <bits/stdc++.h>

using namespace std;
int main()
{
   string s;
   cin>>s;
   string hello = "hello";
   int k = 0;
   for (int i = 0; i < s.size(); i++)
   {
       if (s[i]==hello[k])
       {
          k++;
       }
   }
   // cout<<k<<endl;
   if (k==5)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
   
   
   return 0;
}