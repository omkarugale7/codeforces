/* Editor: Omkar Ugale
DATE - 27-Jun-2022 TIME - 11:10:36*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll N = 1e5 + 1;
ll global[N];
void values()
{
    for (ll i = 1; i <= N; i++)
        global[i - 1] = (3 * (i * i) + i) / 2;
}
int main()
{
    values();  
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int i = 0;
        // while (global[i] < n)
        //     cout << global[i++] << endl;
        int ans = 0;
        while (n > 1)
        {
            auto it = upper_bound(global, global + N, n) - 1;
            // cout << *it << endl;
            n -= *it;
            ans++;
        }
        cout  << ans << endl;
    }
    return 0;
}