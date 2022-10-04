/* Editor: Omkar Ugale
DATE - 20-Sep-2022 TIME - 11:10:29*/
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
        string s;
        cin >> s;
        set<int> ss;
        int arr[3] = {0};
        int ans = 1e8 + 1;
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - '0' - 1] = i;
            ss.insert(s[i] - '0');
            if (ss.size() == 3)
            {
                int temp = 0;
                int brr[3];
                brr[0] = arr[0], brr[1] = arr[1], brr[2] = arr[2];
                sort(brr, brr + 3);
                ans = min(ans, brr[2] - brr[0] + 1);
                // cout << brr[0] << " " << brr[1] << " " << brr[2] << endl;
            }
        }
        if (ans == 1e8 + 1)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}