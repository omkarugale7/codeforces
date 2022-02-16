#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        char c = s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
                count++;
        }
        if (count % 2 == 0 && s[0] != s[s.size() - 1])
            cout << "YES" << endl;
        else if (count % 2 != 0 && s[0] == s[s.size() - 1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}