/* Editor: Omkar Ugale
Time : . 10th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, temp = 0, i, j;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        for (int k = 0; k < n; k++)
        {
            // int ans = 0;
            for (int l = 0; l < m; l++)
            {
                int ans = 0;
                ans += arr[k][l];
                i = k - 1, j = l + 1;
                while (i >= 0 && i < n && j >= 0 && j < m)
                {
                    ans += arr[i][j];
                    i--, j++;
                }
                i = k - 1, j = l - 1;
                // i = 0, j = 0;
                while (i >= 0 && i < n && j >= 0 && j < m)
                {
                    ans += arr[i][j];
                    i--, j--;
                }
                i = k + 1, j = l + 1;
                // i = 0, j = 0;
                while (i >= 0 && i < n && j >= 0 && j < m)
                {
                    ans += arr[i][j];
                    i++, j++;
                }
                i = k + 1, j = l - 1;
                // i = 0, j = 0;
                while (i >= 0 && i < n && j >= 0 && j < m)
                {
                    ans += arr[i][j];
                    i++, j--;
                }
                // cout << ans << endl;
                temp = max(ans, temp);
            }
        }

        cout << temp << endl;
    }
    return 0;
}