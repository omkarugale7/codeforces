#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r, n;
        cin >> l >> r >> n;
        if (r / n == l / n)
            cout << r / n + r % n << endl;
        else
            cout << max((r / n - 1 + n - 1), (r / n + r % n)) << endl;
    }
    return 0;
}