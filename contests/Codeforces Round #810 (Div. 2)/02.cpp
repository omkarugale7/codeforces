/* Editor: Omkar Ugale
DATE - 24-Jul-2022 TIME - 20:40:00*/
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
        int n, m;
        cin >> n >> m;
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        // sort(arr, arr + n);
        map<int, int> mp;
        pair<int, int> p[m];
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            p[i] = {a, b};
            mp[a]++;
            mp[b]++;
        }
        if (m % 2==0)
            cout << 0 << endl;
        else
        {
            int ans = INT_MAX;
            for (auto it : mp)
            {
                if (it.second % 2 != 0)
                    ans = min(ans, arr[it.first - 1]);
            }
            int ans2 = INT_MAX;
            for (int i = 0; i < m; i++)
            {
                if (mp[p[i].first] % 2 == 0 && mp[p[i].second] % 2 == 0)
                {
                    ans2 = min(ans2, arr[p[i].first - 1] + arr[p[i].second - 1]);
                }
            }
            cout<<min(ans, ans2)<<endl;
        }
        // PrintArr(arr);
    }
    return 0;
}