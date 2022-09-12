#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int big = min(n / k, m);
        int small = ceil((m-big)*1.0/(k-1));
        cout << big - small << endl;
    }
    return 0;
}