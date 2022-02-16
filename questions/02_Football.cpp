#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int length_0 = 0;
    int length_1 = 0;
    int ans = 0;
    int zero = false;
    int one = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            zero = true;
            one = false;
            length_0++;
            length_1 = 0;
            ans = max(ans, length_0);
        }
        else
        {
            one = true;
            zero = false;
            length_1++;
            length_0 = 0;
            ans = max(ans, length_1);
        }
    }
        // cout << ans << endl;
        if (ans >= 7)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    return 0;
}