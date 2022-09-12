#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, k, i = 1;
        cin >> n >> k;
        if (n <= k)
            cout <<(ll) ceil(k * 1.0 / n*1.0) << endl;
        else
        {
            k *= (ll)ceil(n * 1.0 / k);
            cout << (ll) ceil(k *1.0 / n*1.0) << endl;
        }
    }
    return 0;
}