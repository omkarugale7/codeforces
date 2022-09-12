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
        ll m, n;
        cin >> m >> n;
        ll minn = min(m, n);
        ll diff = abs(m - n);
        ll ans = (minn - 1) * 2 + diff * 2;
        if (m % 2 != n % 2)
            ans--;
        if (min(m, n) == 1 && max(m, n) > 2)
            cout << "-1" << endl;
        else if (m == 1 && n == 1)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}