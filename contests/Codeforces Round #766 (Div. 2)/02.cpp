/*Editor: Omkar Ugale
Time : .  15th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int classo[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int a[4];
                a[0] = abs(i - 0) + abs(j - 0);
                a[1] = abs(i - n + 1) + abs(j - 0);
                a[2] = abs(i - 0) + abs(j - m + 1);
                a[3] = abs(i - n + 1) + abs(j - m + 1);
                sort(a, a + 4);
                classo[i][j] = a[3];
            }
        }
        int ans[m * n], k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans[k++] = classo[i][j];
            }
        }
        sort(ans, ans + (m * n));
        for (int i = 0; i < (m * n); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}