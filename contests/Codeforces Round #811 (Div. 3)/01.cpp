/* Editor: Omkar Ugale
DATE - 01-Aug-2022 TIME - 20:01:58*/
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
bool comp(pair<int, int> a, pair<int, int> b)
{

    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        pair<int, int> bed;
        cin >> n;
        cin >> bed.first >> bed.second;
        int bedtime = 60 * bed.first + bed.second;
        vector<pair<int, int>> arr(n);
        int ans = 1e4 + 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
            int time = 60 * arr[i].first + arr[i].second;
            int k;
            if (time < bedtime)
                k = (24 * 60) - (bedtime - time);
            else
                k = time - bedtime;
            ans = min(ans, k);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
        // sort(arr.begin(), arr.end(), comp);
        // cout << endl;
        // for (int i = 0; i < n; i++)
        //     cout << arr[i].first << " " << arr[i].second << endl;
        // int hr = 0;
        // int min = 0;
        // bool milakya = false;
        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i].first >= bed.first)
        //     {
        //         // cout << arr[i].first << " k " << arr[i].second << endl;
        //         if (arr[i].second < bed.second)
        //         {
        //             arr[i].first--;
        //             min += arr[i].second;
        //             min += (60 - bed.second);
        //         }
        //         else
        //             min += arr[i].second - bed.second;
        //         hr += arr[i].first - bed.first;
        //         milakya = true;
        //         break;
        //     }
        // }
        // if (milakya)
        //     cout << hr << " " << min << endl;
        // else
        //     cout << 23 + arr[0].first - bed.first << " " << 60 + arr[0].second - bed.second << endl;

        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}