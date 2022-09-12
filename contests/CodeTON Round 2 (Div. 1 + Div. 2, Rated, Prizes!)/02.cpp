/* Editor: Omkar Ugale
DATE - 31-Jul-2022 TIME - 20:05:20*/
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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans = 0, maxx = arr[0], minn = arr[0];
        for (int i = 0; i < n; i++)
        {
            maxx = max(maxx, arr[i]);
            minn = min(minn, arr[i]);
            if (maxx - minn > 2 * x)
            {
                ans++;
                maxx = arr[i], minn = arr[i];
            }
        }
cout<<ans<<endl;
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}