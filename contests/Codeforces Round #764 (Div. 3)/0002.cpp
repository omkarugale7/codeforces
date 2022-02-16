#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool flag = false;
        if (2 * b == a + c)
            flag = true;
        else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
            flag = true;
        else if ((2 * b - c) % a == 0 and (2 * b - c) / a > 0)
            flag = true;
        else if ((a + c) % (2 * b) == 0)
            flag = true;
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}