/* Editor: Omkar Ugale
DATE - 31-Jul-2022 TIME - 20:21:10*/
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
        int n, k;
        cin >> n >> k;
        vector<int> arr(k, 0);
        priority_queue<int> pq;
        for (int i = 0; i < k; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        for (int i = 1; i < k; i++)
            pq.push(arr[i] - arr[i - 1] - 1);
        pq.push(n - arr[k - 1] + arr[0] - 1);
        int ans = 0, cnt = 0;
        while (!pq.empty())
        {
            if ((pq.top() - (cnt * 4)) > 0)
                ans += max((int)1, pq.top() - 1 - (cnt * 4));
            cnt++;
            pq.pop();
        }
        cout << n - ans << endl;
    }
    return 0;
}