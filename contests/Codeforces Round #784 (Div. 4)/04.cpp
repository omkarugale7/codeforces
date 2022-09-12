/*Editor: Omkar Ugale
Time : .  21th April 2022 */
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
        bool galathai = false;
        if (n == 1)
            galathai = true;
        if (n == 2 && (s[0] == 'W' || s[1] == 'W') && !(s[0] == 'W' && s[1] == 'W'))
            galathai = true;
        int i = 0, aar = 0, bi = 0;
        while (i < n && s[i] != 'W')
        {
            if (s[i] == 'R')
                aar++;
            if (s[i] == 'B')
                bi++;
            i++;
        }
        if ((aar == 0 && bi != 0) || (aar != 0 && bi == 0))
            galathai = true;
        for (; i < n; i++)
        {
            if (s[i] == 'W')
            {
                aar = 0, bi = 0;
                for (int j = i + 1; j < n; j++)
                {
                    if (s[j] == 'R')
                        aar++;
                    if (s[j] == 'B')
                        bi++;
                    if (s[j] == 'W')
                    {
                        i = j;
                        i--;
                        break;
                    }
                }
                if (aar == 0 && bi == 0)
                    continue;
                if (aar == 0 || bi == 0)    
                    galathai = true;
            }
        }

        if (galathai)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}