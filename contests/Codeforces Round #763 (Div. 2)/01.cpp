#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;
        int a, b;
        if (rb <= rd)
            a = rd - rb;
        else
            a = 2 * n - (rb + rd);
        if (cb <= cd)
            b = cd - cb;
        else
            b = 2 * m - (cb + cd);
        cout << min(a, b) << endl;
    }
    return 0;
}