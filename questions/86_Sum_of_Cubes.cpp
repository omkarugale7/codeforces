/*Editor: Omkar Ugale
Time : .  9th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll N = 1e13 ;
// using ll = long long;
// using ld = long double;
// const ll N = 1'000'000'000'000L;
unordered_set<ll> arrcbs;
void precalc()
{
    for (ll i = 1; i * i * i <= N; i++)
    {
        arrcbs.insert(i * i * i);
    }
}
void solve()
{

    ll n;
    cin >> n;
    for (ll i = 1; i * i * i <= n; i++)
    {
        if (arrcbs.count(n - i * i * i))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl; 
}
int main()
{
    precalc();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}