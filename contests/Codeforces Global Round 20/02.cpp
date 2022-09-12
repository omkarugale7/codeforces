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
        vector<int> v;
        char temp = 'A';
        int cnta = 0, cntb = 0;
        bool galathaikya = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
                cnta++;
            else
                cntb++;
            if (cntb > cnta)
                galathaikya = true;
        }
        if (s[s.length() - 1] == 'A')
            galathaikya = true;
        if (galathaikya)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}