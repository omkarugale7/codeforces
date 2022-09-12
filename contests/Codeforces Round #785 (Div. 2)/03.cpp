#include <bits/stdc++.h>
typedef long long int ll;
#define MAX 40001 
const ll modd = 1e9 + 7;
using namespace std;
// typedef vector<ll> vi;  

vector<ll> build()
{
   vector<ll> ans;
    for (ll i = 1; i < MAX; i++)
    {
        if (ii(i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}
bool ii(ll n)
{
    ll w = 1;
    while (n / w >= 10)
        w *= 10;
    while (n != 0)
    {
        int f = n / w;
        int j = n % 10;
        if (f != j)
            return false;
        n = (n % w) / 10;
        w = w / 100;
    }
    return true;
}


int main()
{
    ll t;
    cin >> t;
    vector<ll> drome = build();
    ll x, y;
    ll m = drome.size();
    ll arr[MAX + 1][m];
    for (ll i = 0; i < m; i++)
    {
        arr[0][i] = 1;
    }
    for (ll i = 1; i < MAX; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            x = (i - drome[j] >= 0) ? arr[i - drome[j]][j] : 0;
            y = (j >= 1) ? arr[i][j - 1] : 0;
            arr[i][j] = x + y;
            arr[i][j] %= modd;
        }
    }

    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        cout << arr[n][m - 1] % modd << endl;
    }
    return 0;
}