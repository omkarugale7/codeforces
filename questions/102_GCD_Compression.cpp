/* Editor: Omkar Ugale
DATE - 13-Sep-2022 TIME - 21:35:32*/
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
        // map<int, int> m;
        // set<int> s;
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < 2 * n; i++)
        {
            int k;
            cin >> k;
            if (k % 2)
                odd.push_back(i + 1);
            else
                even.push_back(i + 1);
        }
        // PrintArr(odd);
        int i = 0, cnt = 0;
        while (i < odd.size())
        {
            if(cnt+1==n)
            break;
            if (odd.size() - i == 1)
                break;
            cout << odd[i++] << " " << odd[i++] << endl;
            cnt++;
        }
        i = 0;
        while (i < even.size())
        {
            if(cnt+1==n)
            break;
            if (even.size() - i == 1)
                break;
            cout << even[i++] << " " << even[i++] << endl;
            cnt++;
        }
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}