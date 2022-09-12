/*Editor: Omkar Ugale
Time : .  29th March 2022 */
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
        map<int, pair<int, int>> m;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (m.find(s[i]) != m.end())
            {
                ans += (i - m[s[i]].first - 1) + m[s[i]].second;
                m.clear();
            }
            else
            {
                m[s[i]] = make_pair(i, m.size());
            }
        }
        ans += m.size();
        cout << ans << endl;
    }
    return 0;
}