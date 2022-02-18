/*Editor: Omkar Ugale
Time : . 15th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int n;
   cin >> n;
   int a = 1;
   string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
   while (a * 5 < n)
   {
      n -= a*5;
      a *= 2;
   }
   cout << names[(n - 1) / a] << endl;
   return 0;
}