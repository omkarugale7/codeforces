/* Editor: Omkar Ugale
DATE - 13-Sep-2022 TIME - 22:22:41*/
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
    // vector<int> arr(n, 0);
    map<string, int> m;
    // set<int> s;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (m[s] == 0)
        {
            cout << "OK" << endl;
            m[s]++;
        }
        else
            cout << s << m[s]++ << endl;
    }
    // sort(arr.begin(), arr.end());

    // PrintArr(arr);
    return 0;
}