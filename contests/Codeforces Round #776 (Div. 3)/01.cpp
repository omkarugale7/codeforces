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
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                x = i;
                y = s.size() - i - 1;
                if (x % 2 == 0 || y % 2 == 0)
                    break;
                else
                    continue;
            }
        }
        cout << x << " " << y << endl;
        if (x % 2 == 0 && y % 2 == 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}