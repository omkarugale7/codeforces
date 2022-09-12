/* Editor: Omkar Ugale
DATE - 19-Jun-2022 TIME - 14:24:49*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b; 
        swap(a,b);
        ll k = (a * (a + 1)) / 2;
        ll z = (b * (b + 1)) / 2 - 1;
        // cout<<k<<"    "<<z<<endl;
        ll ans = k + z*(a);
        cout << ans << endl;
    }
    return 0;
}