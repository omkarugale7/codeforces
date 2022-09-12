/* Editor: Omkar Ugale
DATE - 10-Jul-2022 TIME - 21:11:14*/
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
        int cnt;
        cin >> cnt;
        int ans = 0;
        string copy = s;
        sort(copy.begin(), copy.end()), reverse(copy.begin(), copy.end());
        map<int, vector<int>> m;
        for (int i = 0; i < s.size(); i++)
        {
            ans += s[i] - 'a' + 1;
            m[s[i] - 'a' + 1].push_back(i);
        }
        int k = 0;
        // cout<<ans<<endl;
        while (ans > cnt)
        {
            char ch = copy[k++];
            // cout<<ch<<" "<<ch-'a'+1<<" "<<ans<<" "<<cnt<<endl;
            ans -= (ch - 'a' + 1);
            s[m[ch - 'a' + 1][m[ch - 'a' + 1].size()-1]] = '.';
            m[ch - 'a' + 1].pop_back();
        }
        // cout<<ans<<" "<<cnt<<endl;
        for (int i = 0; i < s.size(); i++)
        {
           if(s[i]!='.')
           cout<<s[i];
        }
        cout<<endl;
        
    }
    return 0;
}