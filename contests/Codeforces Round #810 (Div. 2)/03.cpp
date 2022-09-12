/* Editor: Omkar Ugale
DATE - 24-Jul-2022 TIME - 21:33:11*/
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
string solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(k, 0);
    // map<int, int> m;
    // set<int> s;
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] / m >= 2)
            cnt += arr[i] / m;
        // cout << cnt << endl;
    }
    if (n % 2)
    {
        bool flag = false;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] / m > 2)
                flag = true;
        }
        if (cnt >= n && flag)
            return "YES";
    }
    if (n % 2 == 0)
    {
        if (cnt >= n)
            return "YES";
    }
    int cnt2 = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] / n >= 2)
            cnt2 += arr[i] / n;
        // cout << cnt2 << endl;
    }
    if (m % 2)
    {
        bool flag = false;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] / n > 2)
                flag = true;
        }
        if (cnt2 >= m && flag)
            return "YES";
    }
    else
    {
        if (cnt2 >= m)
            return "YES";
    }
    // cout << "YES" << endl;
    return "NO";
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
        // PrintArr(arr);
    }
    return 0;
}