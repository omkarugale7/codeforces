#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, c;
        cin >> a >> c;
        bool abcd = true;
        int i, j = 1, k, b = 0;
        while (a != 0 || c != 0)
        {
            if (a > c)
            {
                abcd = false;
                break;
            }

            int rem_a = a % 10;
            int rem_c = c % 10;
            a /= 10;
            c /= 10;
            // cout << rem_a << " " << rem_c << endl;
            if (rem_a > rem_c)
            {
                int rem_cc = c % 10;
                c /= 10;
                int z = rem_cc * 10 + rem_c;
                int k = (z - rem_a);
                if (k > 9 || k < 0)
                {
                    abcd = false;
                }

                b += k * j;
                // cout << z << " " << rem_a << " " << b << endl;
            }
            else
            {
                int k = (rem_c - rem_a);
                if (k > 9 || k < 0)
                {
                    abcd = false;
                }
                b += k * j;
                // cout << rem_c << " " << rem_a << " " << b << endl;
            }
            j *= 10;
            // cout << b << endl;
        }
        if (abcd)
            cout << b << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}