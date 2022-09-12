/* Editor: Omkar Ugale
DATE - 16-Jul-2022 TIME - 20:23:08*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        ll arr[n];
        ll a = 1;
        bool nahihosakta = false;
        for (int i = 0; i < n; i++)
        {
            if (((ceil(l * 1.0 / (i + 1))) * (i + 1)) <= r)
                arr[i] = (i + 1) * ceil(l * 1.0 / (i + 1));
            else
            {
                nahihosakta = true;
                break;
            }
        }
        if (nahihosakta)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}