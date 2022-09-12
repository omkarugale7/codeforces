/*Editor: Omkar Ugale
Time : .  16th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans[n] = {0};
        int kk = k;
        for (int i = 0; i < n; i++)
        {
            if (k <= 0)
                break;
            if (s[i] == '1')
            {
                if (kk % 2)
                    ans[i] = 1, k--;
                else
                    ans[i] = 0;
            }
            else
            {
                if (kk % 2 == 0)
                    ans[i] = 1, k--;
                else
                    ans[i] = 0;
            }
            if (k <= 0)
                break;
        }
        ans[n - 1] += k;
        for (int i = 0; i < n; i++)
        {
            if ((kk - ans[i]) % 2)
            {
                if (s[i] == '0')
                    s[i] = '1';
                else
                    s[i] = '0';
            }
        }
        cout << s << endl;
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}