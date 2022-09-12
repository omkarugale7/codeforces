/*Editor: Omkar Ugale
Time : .  21th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void solve()
{
    string s;
    cin >> s;
    bool flag = true;
    if (s.size() == 1)
    {
        cout << "NO" << endl;
        return;
    }
    ll n = s.size();
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            b++;
        if (b > a)
        {
            flag = false;
            break;
        }
        a -= b;
        b = 0;
    }
    if (s[n - 1] != 'B')
        flag = false;
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}