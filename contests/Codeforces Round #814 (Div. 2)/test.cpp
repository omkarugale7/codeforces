/* Editor: Omkar Ugale
DATE - 16-Aug-2022 TIME - 20:22:49*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cin >> k;
        int t = ceil(k * 1.0 / 4);
        int i = t * 4 - k;
        cout << i << endl;
    }
    return 0;
}