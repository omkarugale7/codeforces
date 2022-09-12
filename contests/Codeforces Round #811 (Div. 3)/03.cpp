/* Editor: Omkar Ugale
DATE - 01-Aug-2022 TIME - 20:27:23*/
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
        string ans = "";
        int k = 9;

        while (n > 0)
        {
            if (k <= n)
            {
                ans += to_string(k);
                // cout << ans << endl;
                n -= k;
                k--;
            }
            else
            {
                ans += to_string(n);
                break;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}