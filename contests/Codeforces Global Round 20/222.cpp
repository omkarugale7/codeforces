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
        string s;
        cin >> s;
        int a = 0, b = 0;
        bool galathai = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
                a++;
            else
            {
                b++;
            }
            if (b > a)
                galathai = true;
        }
        if (s[0] == 'B' || s[s.length() - 1] == 'A' || s.length() == 1)
            galathai = true;
        if (galathai)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}