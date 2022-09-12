/*Editor: Omkar Ugale
Time : .  21th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if (arr[0] > x)
    {
        cout << 0 << endl;
        return;
    }
    int sum = accumulate(arr, arr + n, 0), temp, ans, zz = 0;
    if (sum < x)
        ans = n;
    for (int i = n - 1; i >= 0; i--)
    {
        temp = (x - sum) / (i + 1);
        zz += temp;
        ans += temp * (i + 1);
        sum -= arr[i];
        arr[i - 1] += (zz + 1);
        sum += (temp + 1) * i;
        if (sum < x)
            ans += i;
    }
    if (ans < 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        cout << ans << endl;
        return;
    }
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