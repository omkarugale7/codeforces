/* Editor: Omkar Ugale
DATE - 09-Aug-2022 TIME - 19:54:12*/
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
        int ans = 0;
        int v1 = INT_MAX, v2 = INT_MIN, v3 = INT_MAX, v4 = INT_MIN;
        bool v1mil = false, v2mil = false, v3mil = false, v4mil = false;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a <= 0)
            {
                v1 = min(v1, a);
                v1mil = true;
            }
            else
            {
                v2 = max(v2, a);
                v2mil = true;
            }
            if (b <= 0)
            {
                v3 = min(v3, b);
                v3mil = true;
            }
            else
            {
                v4 = max(v4, b);
                v4mil = true;
            }
        }
        cout << v1 << " " << v2 << " " << v3 << " " << v4 << endl;
        if (v1mil)
            ans += abs(v1);
        if (v2mil)
            ans += abs(v2);
        if (v3mil)
            ans += abs(v3);
        if (v4mil)
            ans += abs(v4);
        cout << ans << endl;
        // sort(arr.begin(), arr.end());
        // PrintArr(arr);
    }
    return 0;
}