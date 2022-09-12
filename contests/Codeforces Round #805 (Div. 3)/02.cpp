/* Editor: Omkar Ugale
DATE - 10-Jul-2022 TIME - 20:21:14*/
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
        map<char, int> m;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
            if (m.size() > 3)
            {
                // for (auto it : m)
                //     cout << it.first << " ";
                // cout << endl;
                m.clear();
                m[s[i]]++;
                ans++;
            }
        }
        if (m.size() > 0)
        {
            // for (auto it : m)
            //     cout << it.first << " ";
            ans++;
        }
        // cout << m.size() << endl;
        cout << ans << endl;
    }
    return 0;
}