#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string a, b;
        cin >> a >> b;
        string c;
        if (b == "abc")
            c = "acb";
        else if (b == "acb")
            c = "abc";
        else if (b == "bac")
            c = "bca";
        else if (b == "bca")
            c = "bac";
        else if (b == "cab")
            c = "cba";
        else if (b == "cba")
            c = "cab";
        string ans = c;
        int x = 1, y = 1, z = 1;
        for (int i = 0; i < a.size(); i++)
        {
            if ((a[i] == b[0] || a[i] == b[1] || a[i] == b[2]) && (x == 1))
            {
                cout << 1 << endl;

                x--;
                continue;
            }
            else if ((a[i] == b[0] || a[i] == b[1] || a[i] == b[2]) && (y == 1))
            {
                cout << 2 << endl;
                y--;
                continue;
            }
            else if ((a[i] == b[0] || a[i] == b[1] || a[i] == b[2]) && (z == 1))
            {
                cout << 3 << endl;
                z--;
                continue;
            }
            else
            {
                // cout << 4 << endl;

                if (a[i] - '0' <= b[0] - '0')
                    ans = a[i] + ans;
                else if (a[i] - '0' > b[1] - '0')
                    ans += a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}