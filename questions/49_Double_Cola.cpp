/*Editor: Omkar Ugale
Time : . 15th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int t;
   cin >> t;
   int z = 1750;
   while (t<=140)
   {
t++;
      string names[] = {"", "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"}; 
      int n = z + t;
      // int n;
      // cin >> n;
      cout << n << " ";
      int i = 1, t = 5;
      bool nahimila = true;
      while (nahimila)
      {
         if (n > t)
         {
            n -= t;
            i++;
            t = 5 * i;
         }
         else
         {
            int ind = n / i;
            if (n % i != 0)
            {
               cout << names[ind + 1] << " " << t << endl;
               nahimila = false;
               break;
            }
            else
               cout << names[ind] << " " << t << endl;
            break;
         }
      }
   }
   return 0;
}