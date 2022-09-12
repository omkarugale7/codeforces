/* Editor: Omkar Ugale
DATE - 12-Jul-2022 TIME - 19:53:22*/
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
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        if (s == "YES")
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
        return 0;
}