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
        vector<int> cnt;
        char temp = s[0];
        int ttt = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (temp != s[i])
            {
                cnt.push_back(ttt);
                ttt = 1;
                temp = s[i];
            }
            else
            {
                ttt++;
            }
        }
        cnt.push_back(ttt);
        bool sahihaikya = true;
        for (int i = 0; i < cnt.size(); i++)
        {
            //     cout << cnt[i] << " ";
            if ((cnt[i] == 1))
            {
                // cout << cnt[i] << "l ";
                sahihaikya = false;
                break;
            }
        }
        if (sahihaikya)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}