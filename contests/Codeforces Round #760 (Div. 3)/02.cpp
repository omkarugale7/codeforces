#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool jhala_ka = false;
        string arr[n - 2];
        for (int i = 0; i < n - 2; i++)
            cin >> arr[i];
        string ans = "";
        ans += arr[0][0];
        for (int i = 1; i < n - 2; i++)
        {
            char now = arr[i][0];
            char prev = arr[i - 1][1];
            if (now == prev)
                ans += prev;
            else
            {
                ans = ans + prev + now;
                jhala_ka = true;
            }
        }
        ans += arr[n-3][1];
        if (jhala_ka == false)
            ans += "a";

        cout << ans << endl;
    }

    return 0;
}