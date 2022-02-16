/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   int zeroes = 0, ones = 0;
   for (int i = 0; i < n; i++)
   {
      if (s[i] == '0')
         zeroes++;
      else
         ones++;
   }
   cout<< n-2*(min(zeroes,ones))<<endl;

   return 0;
}