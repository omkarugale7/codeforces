/* Editor: Omkar Ugale
DATE - 15-Sep-2022 TIME - 21:18:26*/
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
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    map<int, int> m;
    // set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    if (m.size() > 1)
        cout << arr[n - 1] - arr[0] << " " << m[arr[n - 1]] * m[arr[0]] << endl;
    else
        cout << 0 << " " << (n * (n - 1)) / 2 << endl;
    // PrintArr(arr);
    return 0;
}