#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        ans += s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] < s[i - 1] || (s[i] == s[i - 1]) && (s[i] < s[0]))
                ans += s[i];
            else
                break;
        }
        string further = ans;
        reverse(ans.begin(), ans.end());
        further += ans;
        cout << further << endl;
    }
    return 0;
}