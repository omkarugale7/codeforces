#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define int long long 
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool ans_odd = true;
        bool ans_even = true;
        int arr[n];
        int gcd_odd = arr[1], gcd_even = arr[0];
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                gcd_even = gcd(gcd_even, arr[i]);
            else
                gcd_odd = gcd(gcd_odd, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && arr[i] % gcd_odd == 0)
                ans_odd = false;
            else if (i % 2 != 0 && arr[i] % gcd_even == 0)
                ans_even = false;
        }

        if (ans_odd == true)
            cout << gcd_odd << endl;
       else if (ans_even == true)
            cout << gcd_even << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}