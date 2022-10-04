/* Editor: Omkar Ugale
DATE - 04-Oct-2022 TIME - 14:14:48*/
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
        vector<int> brr(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int o = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            if (brr[i])
                o++;
            else
                z++;
        }
        vector<int> temp = arr;
        sort(arr.begin(), arr.end());
        if (arr == temp)
            cout << "Yes" << endl;
        else if (o && z)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        // PrintArr(arr);
    }
    return 0;
}