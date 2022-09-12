/* Editor: Omkar Ugale
DATE - 09-Aug-2022 TIME - 20:37:46*/
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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int i = 0;
        for (i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
                break;
        }
        bool sahihai = true;
        for (int j = 0; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                sahihai = false;
            }
        }
        if (sahihai)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}