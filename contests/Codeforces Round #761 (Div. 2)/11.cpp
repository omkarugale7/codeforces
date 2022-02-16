#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define all(a) (a).begin(), (a).end()
#define ll long long
#define sza(x) ((int)x.size())
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s, t;
        cin >> s >> t;
        sort(all(s));
        if (t == "abc")
        {
            if (s[0] != 'a')
            {
                cout << s << "\n";
               continue;
            }
            ll i = 0, j = 0;
            for (; i < sza(s) - 1; i++)
                if (s[i] == 'b')
                    break;
            for (j = i; j < sza(s) - 1; j++)
                if (s[j] == 'c')
                    break;
            while (j < sza(s) && s[j] == 'c')
            {
                swap(s[i], s[j]);
                i++;
                j++;
            }
        }
        cout << s << "\n";
    }
    return 0;
}