/*Editor: Omkar Ugale
Time : .  22th March 2022 */
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
        int ans = 0;
        bool doosrachaluhai = false;
        char temp;
        int hataye = 0, chaluwale = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (doosrachaluhai && temp == s[i])
            {
                ans++;
                // cout<<"a "<<ans<<endl;
                chaluwale++;
                hataye += chaluwale;
                chaluwale = 0;
                doosrachaluhai = false;
                continue;
            }
            else if (doosrachaluhai && temp != s[i])
            {
                chaluwale++;
                continue;
            }
            else if (s[i] == '(' && (s[i + 1] == ')' || s[i + 1] == '('))
            {
                i++;
                ans++;
                hataye += 2;
                // cout<<"b "<<ans<<endl;
            }
            else if (s[i] == ')' && s[i + 1] == ')')
            {
                i++;
                ans++;
                hataye += 2;
                // cout<<"c "<<ans<<endl;
            }
            else
            {
                doosrachaluhai = true;
                chaluwale++;
                temp = s[i];
            }
        }
        if (doosrachaluhai && temp == s[n - 1])
        {
            ans++;
            // cout<<"a "<<ans<<endl;
            chaluwale++;
            hataye += chaluwale;
            chaluwale = 0;
            doosrachaluhai = false;
        }
        cout << ans << " " << n - hataye << endl;
    }
    return 0;
}