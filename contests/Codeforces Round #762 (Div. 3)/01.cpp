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
        if (s.length() % 2 == 0)
        {
            string first = s.substr(0, (s.length() / 2));
            string last = s.substr((s.length() / 2), (s.length() / 2));
            if (first == last)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}