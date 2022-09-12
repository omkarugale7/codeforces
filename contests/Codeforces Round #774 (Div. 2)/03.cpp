#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr;
        ll i = 0;
        ll a = 1, b = 1, z = 1;
        while (z <= n)
        {
            if (z < n)
                // cout << z << " z" << endl;
            arr.push_back(z);
            a++;
            z *= a;
        }
        while (b <= n)
        {
            // cout << b << " b" << endl;
            arr.push_back(b);
            b *=(ll) 2;
        }
        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
        int ans = 0;
    }
    return 0;
}