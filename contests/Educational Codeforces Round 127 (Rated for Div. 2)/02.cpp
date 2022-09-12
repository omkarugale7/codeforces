#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
string solvenakokarubaraka()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n == 1)
        return "YES";
    bool ho = false;
    int cnt[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cnt[i] = arr[i + 1] - arr[i]-1;
    }
    if (n == 2 && ((arr[1] - arr[0]) < 4))
    {
        return "YES";
    }
    else if (n == 2)
    {
        return "NO";
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += cnt[i];
    }
    if (sum > 2)
        ho = true;
    if (ho)
        return "NO";
    else
        return "YES";
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cout << solvenakokarubaraka() << "\n";
    }
    return 0;
}