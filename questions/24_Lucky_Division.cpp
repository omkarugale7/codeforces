/*Editor: Omkar Ugale
Time : . 12th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool IsLucky(int n)
{
   while (n > 0)
   {
      int a = n % 10;
      if (a != 4 && a != 7)
         return false;
      n /= 10;
   }
   return true;
}
int main()
{

   int n;
   cin >> n;
   if (IsLucky(n))
      cout << "YES" << endl;
   else
   {
      if (n % 4 == 0 || n % 7 == 0)
         cout << "YES" << endl;
      else
      {
         bool k = false;
         for (int i = 1; i <= sqrt(n); i++)
         {
            if ((n % i == 0 && IsLucky(i)) || (n % (n / i) == 0 && IsLucky(n / i)))
            {
               k = true;
               break;
            }
         }
         if (k)
            cout << "YES" << endl;
         else
            cout << "NO" << endl;
      }
   }
   return 0;
}