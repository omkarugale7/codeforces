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
        if ((b - a == 1))
        {
            if ((b & a == 0))
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            int z = a + 1;
            while ((z & z - 1) != 0)
            {
                z++;
            }
            int ans1 = z;
            int y = b - 1;
            while ((y & y - 1) != 0)
            {
                y--;
            }
            int ans2 = y;
            int ans11 = ans1 - a;
            int ans22 = b - ans2;
            // cout << a << " " << b << " " << ans1 << " " << ans2 << endl;
            int fans = min(ans11, ans22);
            if (((a & a - 1) == 0) && ((b & b - 1) == 0))
                cout << fans + 1 << endl;
            else
                cout << fans << endl;
        }
    }

    return 0;
}