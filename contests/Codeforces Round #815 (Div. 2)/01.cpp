/* Editor: Omkar Ugale
DATE - 18-Aug-2022 TIME - 19:04:47*/
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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0 && c == 0)
            cout << 0 << endl;
        else if (a == 0 || c == 0)
            cout << 1 << endl;
       else if (a * d == b * c)
            cout << 0 << endl;
        else if (((a * d) % (c * b) == 0) || ((c * b) % (a * d) == 0))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}