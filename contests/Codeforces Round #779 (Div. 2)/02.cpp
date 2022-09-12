
/*Editor: Omkar Ugale
Time : .  26th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll k = 998244353;
int fact(int n)
{
    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans % k * i % k;
        ans %= k;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2)
            cout << 0 << endl;
        else
        {
            cout << (fact(n / 2) % k) * fact(n / 2) % k << endl;
        }
    }
    return 0;
}