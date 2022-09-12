#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << "1" << endl;
        else
        {
            cout << (1ll << n) - 1 << endl;
        }
    }
    return 0;
}