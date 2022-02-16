#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            map[A[i]]++;
        }
        sort(A.begin(), A.end());
        vector<int> dp(n, INT_MAX);
        dp[0] = map[0];
        for (int i = 1; i <= n; i++)
        {
            if (dp[i - 1] == INT_MAX)
                dp[i] = dp[i - 1];
            else
            {
                int j = upper_bound(A.begin(), A.end(), i - 1) - A.begin();
                if (j >= i)
                {
                    j--;
                    dp[i] = dp[i - 1] - map[i - 1] + map[i] + (i - 1 - A[j]);
                }
                else
                {
                    dp[i] = INT_MAX;
                }
            }
        }
        for (int i = 0; i <= n; i++)
        {
            if (dp[i] == INT_MAX)
                cout << -1 << " ";
            else
                cout << dp[i] << " ";
        }
        cout << endl;
    }
}