#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll a;
        cin >> a;
         cout<< upper_bound(arr, arr + n, a)-arr<<endl;
    }

    return 0;
}