/*Editor: Omkar Ugale
Time : .  13th April 2022 */
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
        s = 'R' + s + 'R';
        int ans = 0, cnt = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                ans = max(ans, cnt);
                cnt = 1;
            }
            else 
            cnt++;
        }
        cout<<ans<<endl;
    }
    return 0;
}