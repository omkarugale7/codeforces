/*Editor: Omkar Ugale
Time : . 15th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      string s;
      cin >> s;
      int ones = 0, zeroes = 0;
      for (int i = 0; i < s.size(); i++)
      {
         if (s[i] == '0')
            zeroes++;
         else
            ones++;
      }

      int j =  min(zeroes,ones);
      if (j % 2)
         cout << "DA" << endl;
      else
         cout << "NET" << endl;
   }
   return 0;
}