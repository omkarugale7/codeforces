/* Editor: Omkar Ugale
DATE - 31-May-2022 TIME - 21:04:12*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        // bool galathai = false;
        // if (s[n - 1] != 0)
        //     galathai = true;
        ll cnt = 0, cntt = 0, a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                cntt += ((s[i - 1] - '0') * 10) + (s[i] - '0');
            }
        }
        if (s[n - 1] != '1')
        {
            for (int i = n - 2; i >= 0; i--)
            {
                if (s[i] == '1')
                {
                    if (k >= n - i - 1)
                    {
                        k -= (n - i - 1);
                        s[i] = '0';
                        s[n - 1] = '1';
                        if (i == 0)
                            cntt++;
                        cntt -= 10;
                    }
                    break;
                }
            }
        }
        if (s[0] != '1')
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i] == '1')
                {
                    if (k >= i)
                    {
                        cntt -= 1;
                    }
                    break;
                }
            }
        }
        cout << cntt << endl;
        // cout << a << " " << b << endl;
        // if (a == 0)
        // {
        //     if (b == 0)
        //         cout << cntt << endl;
        //     else
        //         cout << cntt - 1 << endl;
        // }
        // else if (b == 0)
        //     cout << cntt - 9 << endl;
        // else if (cnt == 1)
        // {
        //     if (k >= a)
        //         cout << cntt - 10 << endl;
        //     else if (k >= b)
        //         cout << cntt - 1 << endl;
        // }
        // else if (k >= a + b)
        //     cout << cntt - 11 << endl;
        // else if (k >= a)
        //     cout << cntt - 10 << endl;
        // else if (k >= b)
        //     cout << cntt - 1 << endl;
    }
    return 0;
}