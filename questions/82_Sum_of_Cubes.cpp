#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 10000;
map<ll, ll> arr;
void cubes()
{
    for (int i = 1; i <= N; i++)
    {
        ll k = i;
        arr[(k * k * k)]++;
    }
}

void solve()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= 10001; i++)
    {
        if (arr.find(n - i * i * i) != arr.end())
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}
int main()
{
    cubes();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}