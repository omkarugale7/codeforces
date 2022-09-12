/* Editor: Omkar Ugale
DATE - 14-Jun-2022 TIME - 19:59:21*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        if (a < b)
            ans++;
        if (a < c)
            ans++;
        if (a < d)
            ans++;
        cout << ans << endl;
    }
    return 0;
}