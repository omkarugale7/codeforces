/* Editor: Omkar Ugale
Time : . 19th May 2022 */
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
        int ans = INT_MAX;
        if(s.size()==2)
        {
            cout<<s[1]<<endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            ans = min(ans, s[i] - '0');
        }
        cout<<ans<<endl;
    }
    return 0;
}