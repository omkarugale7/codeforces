/* Editor: Omkar Ugale
DATE - 15-Sep-2022 TIME - 23:13:02*/
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
int ans(int n, int k)
{
    int ans = INT_MAX;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // cout << i << endl;
            if (i <= k)
                ans = min(n/i, ans);
            if (n / i <= k)
                ans = min(ans, i);
        }
    }
    return ans;
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
        cout << ans(n, k) << endl;
    }
    return 0;
}