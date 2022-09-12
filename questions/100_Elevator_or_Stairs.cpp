/* Editor: Omkar Ugale
DATE - 30-Aug-2022 TIME - 11:58:05*/
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
    // int t;
    // cin >> t;
    // while (t--)
    // {
        int x, y, z, t1, t2, t3;
        cin >> x >> y >> z >> t1 >> t2 >> t3;
        int stairs = abs(y - x) * t1;
        int elev = 2 * t3 + (abs(y - x) + abs(z-x)) * t2;
        // cout << elev << " " << stairs << endl;
        if (elev >= stairs)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    // }
    return 0;
}