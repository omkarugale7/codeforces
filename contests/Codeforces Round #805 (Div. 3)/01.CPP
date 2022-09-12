/* Editor: Omkar Ugale
DATE - 10-Jul-2022 TIME - 20:07:25*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ans = "";
        if (s == "1" || s == "10" || s == "100" || s == "10000" || s == "100000" || s == "1000000" || s == "10000000" || s == "100000000" || s == "10000000000"|| s == "100000000000")
        {
            cout << "0" << endl;
        }
        else
        {
            if (s[0] == '1')
                ans = "";
            else
                ans += to_string((s[0] - '0') - 1);
            ans += s.substr(1, s.size());
            int anss = stoi(ans);
            ans = to_string(anss);
            cout << ans << endl;
        }
    }
    return 0;
}