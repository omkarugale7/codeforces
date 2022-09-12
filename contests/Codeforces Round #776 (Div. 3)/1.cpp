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
        char c;
        cin >> c;
        int x = 0, y = 0;
        bool milgaya = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                milgaya = true;
                break;
            }
        }
        if (milgaya)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}