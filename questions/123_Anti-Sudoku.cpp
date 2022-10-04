/* Editor: Omkar Ugale
DATE - 01-Oct-2022 TIME - 09:21:04*/
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
        int n = 9;
        vector<string> arr(n );
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == '1')
                    arr[i][j] = '2';
            }
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << endl;

        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}