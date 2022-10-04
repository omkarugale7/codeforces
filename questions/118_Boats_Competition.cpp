/* Editor: Omkar Ugale
DATE - 20-Sep-2022 TIME - 07:43:20*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
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
        vector<int> arr(n, 0);
        map<int, set<int>> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    int a = i, b = j;
                    if (a > b)
                        swap(a, b);
                    if ((m[arr[i] + arr[j]].find(i) == m[arr[i] + arr[j]].end()) && (m[arr[i] + arr[j]].find(j) == m[arr[i] + arr[j]].end()))
                    {
                        // cout<<"A"<<endl;
                        m[arr[i] + arr[j]].insert(i);
                        m[arr[i] + arr[j]].insert(j);
                    }
                }
            }
        }
        int ans = 0;
        for (auto it : m)
        {
            // cout << it.first << endl;
            // for (auto itt : it.second)
            //     cout << itt << endl;
            // cout << endl;
            int k = it.second.size();
            ans = max(k, ans);
        }
        cout << ans/2 << endl;
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}