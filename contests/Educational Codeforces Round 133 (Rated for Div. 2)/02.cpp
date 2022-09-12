/* Editor: Omkar Ugale
DATE - 04-Aug-2022 TIME - 20:17:52*/
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
        cout<<n<<endl;
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            arr[i] = i + 1;
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
                cout<<endl;
        // sort(arr.begin(), arr.end());
        for (int j = 0; j < n-1; j++)
        {
            swap(arr[j], arr[j + 1]);
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
                cout<<endl;
        }
        // PrintArr(arr);
    }
    return 0;
}