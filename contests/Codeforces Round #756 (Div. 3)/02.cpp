#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = min(a, b);
        int d = (a + b) / 4;
        cout << min(c, d) << endl;
    }

    return 0;
}