#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (abs(c - b) == abs(b - a))
            cout << "YES" << endl;
        else
        {
            if (b < a && b < c && (abs(c - a) / 2) % b == 0)
                cout << "YES" << endl;
            else if (b > a && b > c && (max(a, c) + b) % min(a, c) == 0)
                cout << "YES" << endl;
             
        }
    }
    return 0;
}