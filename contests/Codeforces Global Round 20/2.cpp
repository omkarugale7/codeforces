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
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == temp)
                cnt++;
            else
            {
                v.push_back(cnt);
                cnt = 1;
                temp = s[i];
            }
        }
        v.push_back(cnt);
        bool galathaikya = false;
        for (int i = 1; i < v.size(); i += 2)
        {
            if (v[i] > v[i - 1])
                galathaikya = true;
        }
        if (s[0] == 'B' || s[s.length() - 1] == 'A')
            galathaikya = true;
        if (galathaikya)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}