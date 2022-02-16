#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        if ((m == 1) && (n == 1))
            cout << 0 << endl;
        else
            cout << min(n, m) << endl;
    }

    return 0;
}