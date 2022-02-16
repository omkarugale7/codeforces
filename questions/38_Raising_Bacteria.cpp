/*Editor: Omkar Ugale
Time : . 14th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool IsPrime(int n)
{
   for (int i = 2; i <= sqrt(n); i++)
   {
      if (n % i == 0)
         return false;
   }
   return true;
}
int main()
{
   int n;
   cin >> n;
   int cnt = 1;

   while (n > 1)
   {
      if (n % 2)
      {
         n -= 1;
         cnt += 1;
      }
      else
      n/=2;
   }
cout<<cnt<<endl;
   return 0;
}