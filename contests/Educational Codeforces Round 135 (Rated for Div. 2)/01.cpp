/* Editor: Omkar Ugale
DATE - 08-Sep-2022 TIME - 20:02:37*/
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
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (cnt <= arr[i])
                cnt = arr[i], ans = i + 1;
        }
        cout<<ans<<endl;
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}