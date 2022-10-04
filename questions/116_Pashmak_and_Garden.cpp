/* Editor: Omkar Ugale
DATE - 18-Sep-2022 TIME - 16:08:05*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int32_t main()
{
    fastio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c)
    {
        int diff = abs(b - d);
        cout << a + diff << " " << b << " " << c + diff << " " << d << endl;
    }
    else if (b == d)
    {
        int diff = abs(a - c);
        cout << a << " " << b + diff << " " << c << " " << d + diff << endl;
    }
    else
    {
        int diff = (c - a);
        int df = d - b;
        if (diff != df)
            cout << "-1" << endl;
        cout << a << " " << b + diff << " " << c << " " << d - diff << endl;
    }
    return 0;
}