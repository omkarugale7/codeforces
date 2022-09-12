#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (i != n - 1 && s[m - 1] != 'D')
                ans++;
            if (i == n - 1)
            {
                for (int i = 0; i < m - 1; i++)
                {
                    if (s[i] != 'R')
                        ans++;
                }
            } 
        }
        cout<<ans<<endl;
    }
    return 0;
}