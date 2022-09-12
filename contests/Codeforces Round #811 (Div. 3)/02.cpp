/* Editor: Omkar Ugale
DATE - 01-Aug-2022 TIME - 20:17:29*/
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
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        int ans = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool milakya = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (m[arr[i]])
            {
                ans = i;
                milakya = true;
                break;
            }
            else
                m[arr[i]]++;
        }
        if (milakya)
            cout << ans + 1 << endl;
            else
        cout << 0 << endl;
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}