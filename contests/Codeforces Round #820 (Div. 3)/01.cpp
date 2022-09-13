/* Editor: Omkar Ugale
DATE - 12-Sep-2022 TIME - 20:02:06*/
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
        int a, b, c;
        cin >> a >> b >> c;
        int i = abs(a - 1);
        int j = abs(b - c) + abs(c - 1);
        // cout << i << j << endl;
        if (i < j)
            cout << 1 << endl;
        else if (j < i)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}