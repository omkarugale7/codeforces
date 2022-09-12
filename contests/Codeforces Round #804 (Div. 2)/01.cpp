/* Editor: Omkar Ugale
DATE - 04-Jul-2022 TIME - 19:52:17*/
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
        if (n % 2)
            cout << "-1" << endl;
        else
        {
            cout << "0 " << n / 2 << " " << n / 2 << endl;
            // cout<<(((0^n/2)^n/2))<<endl;
        }
    }
    return 0;
}