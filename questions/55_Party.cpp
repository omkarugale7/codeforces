/*Editor: Omkar Ugale
Time : . 17th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const int N = 1e4 + 1;
vector<int> graph[N];
int main()
{

   int n;
   cin >> n;
   for (int i = 1; i <= n; i++)
   {
      int k;
      cin >> k;
      if (k == -1)
         k = 0;
      graph[k].push_back(i);
   }
   for (int i = 0; i <= n; i++)
   {
      for (int j = 0; j <= graph[i].size(); j++)
      {
         cout << graph[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}