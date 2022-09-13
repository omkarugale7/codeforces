/* Editor: Omkar Ugale
DATE - 12-Sep-2022 TIME - 13:45:05*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                       \
   ios_base::sync_with_stdio(false); \
   cin.tie(NULL);                    \
   cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
   for (int i = 0; i < arr.size(); i++)
      cout << arr[i] << " ";
   cout << endl;
}
const int N = 1e4 + 1;
int vis[N] = {0};
void dfs(vector<int> arr[], int node)
{
   vis[node] = 1;
   queue<int> q;
   q.push(node);
   while (!q.empty())
   {
      int par = q.front();
      for (auto child : arr[par])
      {
            if(!vis[child])
            q.push(child);
      }
   }
}
int32_t main()
{
   fastio;
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> arr[n + 1];
      for (int i = 0; i < n; i++)
      {
         int a;
         cin >> a;
         if (a == -1)
            arr[i].push_back(a);
         else
         {
            arr[a].push_back(i);
            arr[i].push_back(a);
         }
      }
      // sort(arr.begin(), arr.end());

      // PrintArr(arr);
   }
   return 0;
}