/*Editor: Omkar Ugale
Time : .  19th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll ans = 0;
        sort(arr, arr + n);
        for (int i = 0; i < n-1; i++)
        {
            ans += max(arr[i], arr[(i + 1)]);
        }
        ans += max(arr[0], arr[n - 1]);
        // cout << arr[0] << " " << arr[n - 1] << endl;
        // cout << ans << endl;
        ans += n;
        if (ans <= m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}