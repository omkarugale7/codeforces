/*Editor: Omkar Ugale
Time : .  30th April 2022 */
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
        set<char> sett;
        map<char, int> m; 
        bool haikya = true;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]] = 1;
        }
        int temp = m.size();
        for (int i = 0; i < temp; i++)
        {
            sett.insert(s[i]);
        }
        if (sett.size() != temp)
            haikya = false;
        ll k = 0;
        for (ll i = temp; i < s.size(); i++)
        {
            sett.erase(s[k]);
            sett.insert(s[i]);
            k++;
            if (sett.size() != temp)
                haikya = false;
        }
        if (haikya)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}