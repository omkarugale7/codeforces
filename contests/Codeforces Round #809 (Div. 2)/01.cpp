/* Editor: Omkar Ugale
DATE - 18-Jul-2022 TIME - 20:01:06*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s = "";
        for (int i = 0; i < m; i++)
            s += "B";
        // cout << s << endl;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            // cout << k << " " << (m - k) << endl;
            if (k < (m + 1 - k))
            {
                if (s[k - 1] == 'B')
                    s[k - 1] = 'A';
                else
                    s[m - k] = 'A';
            }
            else
            {
                // cout << s << endl;
                if (s[m - k] == 'B')
                    s[m - k] = 'A';
                else
                    s[k - 1] = 'A';
            }
        }
        cout << s << endl;
    }
    return 0;
}