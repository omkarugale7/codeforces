#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, s;
        cin >> a >> s;

        ll len_a = (ll)a.length();
        ll len_s = (ll)s.length();

        ll idx_a = len_a - 1, idx_s = len_s - 1;

        string b;

        bool not_done = true;

        while (idx_a >= 0 and idx_s >= 0)
        {
            ll val_a = a[idx_a] - '0';
            ll val_s = s[idx_s] - '0';
            if (val_a <= val_s)
            {
                ll diff = val_s - val_a;
                b.pb((char)('0' + diff));
                idx_a--, idx_s--;
            }
            else
            {
                idx_s--;
                val_s += (10 * ((ll)(s[idx_s] - '0')));
                ll diff = val_s - val_a;
                if (diff > 9 or diff < 0)
                {
                    not_done = false;
                    break;
                }
                b.pb((char)('0' + diff));
                idx_a--, idx_s--;
            }
        }
        reverse(b.begin(), b.end());
        if (not_done)
            cout << b << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}