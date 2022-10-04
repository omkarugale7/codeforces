/* Editor: Omkar Ugale
DATE - 18-Sep-2022 TIME - 07:06:49*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void PrintArr(vector<char> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i]  ;
    cout << endl;
}
void Printrr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i]  ;
    cout << endl;
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr;
        vector<char> ans(n, 'a');
        if (k == 1)
        {
            ans[n - 1] = 'b', ans[n - 2] = 'b';
        PrintArr(ans);
            continue;
        }
        k--;
        map<int, int> m;
        // set<int> s;
        int i = 1, cnt = 0;
        while (i < n)
        {
            cnt += i;
            arr.push_back(cnt);
            m[cnt] = i;
            i++;
        }
        // Printrr(arr);
        auto it = upper_bound(arr.begin(), arr.end(), k);
        int in = *it;
        int inte = m[in];
        // cout << inte << endl;
        ans[n - inte - 1] = 'b';
        it--;
        in = *it;
        inte = m[in];
        int s = k - in + 1;
        // cout << in << endl;
        // cout << s << endl;
        ans[n - s] = 'b';
        sort(arr.begin(), arr.end());
        PrintArr(ans);
    }
    return 0;
}