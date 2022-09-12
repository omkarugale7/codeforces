/* Editor: Omkar Ugale
DATE - 04-Aug-2022 TIME - 19:29:08*/
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
        int n;
        cin >> n;
        int x = ceil((1.0 * n) / 3);
        if (n == 1)
            cout << 2 << endl;
        else
            cout << x << endl;
    }
    return 0;
}