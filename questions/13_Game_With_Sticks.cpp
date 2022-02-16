/* Editor: Omkar Ugale
Time : .10th Feb 2022 */
#include <bits/stdc++.h>

using namespace std;
int main()
{
   int m, n;
   cin >> m >> n;
   if (min(m, n) % 2 == 0)
      cout << "Malvika" << endl;
   else
      cout << "Akshat"<< endl;
   return 0;
}