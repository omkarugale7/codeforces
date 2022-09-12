/* Editor: Omkar Ugale
DATE - 16-Aug-2022 TIME - 20:19:34*/
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
        int n, k;
        cin >> n >> k;
        set<pair<int, int>> s;
        for (int i = 4; i <= n; i += 4)
        {
            if (((i - 1 + k) * i) % 4 == 0)
                s.insert({i - 1, i});   
        }
        int t = ceil(k * 1.0 / 4);
        int i = t * 4 - k;
        for (i; i <= n; i += 4)
        {
            if (((i + k) * (i + 1)) % 4 == 0)
                s.insert({i, 1 + i});
        }
        // s.insert({i - 1, i});
        if (k == 1 && n == 4)
            s.insert({1, 2});
        if (k >= 1 && n >= 2)
        {
            cout << "YES" << endl;
            for (auto it : s)
                cout << it.first << " " << it.second << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}