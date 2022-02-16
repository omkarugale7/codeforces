#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int sum = x + y;
        if (sum % 2 != 0)
            cout << "-1 -1" << endl;
        else
        {
            if (x % 2 == 0 && y % 2 == 0)
            {
                cout << x / 2 << " " << y / 2 << endl;
            }
            else
            {
                if (x <= y)
                    cout << x << " " << sum / 2 - x << endl;
                else
                    cout << sum / 2 - y << " " << y << endl;
            }
        }
    }

    return 0;
}