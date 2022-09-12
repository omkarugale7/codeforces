/* Editor: Omkar Ugale
DATE - 08-Sep-2022 TIME - 20:29:18*/
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
        map<int, int> m;
        set<int> s;
        for (int i = 0; i < n; i++)
            m[i + 1]++;
        int i = n - 1, k = n;
        while (k)
        {
            // cout << k << endl;
            if (m[k])
            {
                arr[i] = k;
                m[k]--;
            }
            if (k == 1)
                break;
            if ((k / 2) % 2 == 0)
                k = ceil(k * 1.0 / 2);
            else
                k /= 2;
            i--;
        }
        i = 0;
        for (auto it : m)
        {
            if (it.second)
                arr[i++] = it.first;
        }
        // sort(arr.begin(), arr.end());
        PrintArr(arr);
    }
    return 0;
}
