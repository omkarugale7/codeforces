/* Editor: Omkar Ugale
DATE - 12-Jul-2022 TIME - 21:17:28*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        set<pair<int, int>> m;
        vector<int> ss(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < i + 1)
            {
                m.insert({arr[i], i + 1});
                ss[arr[i]]++;
            }
        }
        for (int i = n - 2; i >= 0; i--)
            ss[i] += ss[i + 1];
        int ans = 0;
        for (auto it : m)
        {
           ans+=ss[it.second+1];
        }
        cout << ans << endl;
    }
    return 0;
}