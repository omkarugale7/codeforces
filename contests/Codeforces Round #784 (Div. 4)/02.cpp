/*Editor: Omkar Ugale
Time : .  21th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }
        bool hai = false;
        ll ans;
        for (auto it : m)
        {
            if (it.second >= 3)
            {
                hai = true;
                ans = it.first;
                break;
            }
        }
        if (hai)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}