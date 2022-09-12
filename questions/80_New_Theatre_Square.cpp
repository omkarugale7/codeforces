#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        char arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        }
        int total = 0, adj = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '.')
                    total++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            while (j < m - 1)
            {
                if (arr[i][j] == '.' && arr[i][j + 1] == '.')
                    adj++, j += 2;
                else
                    j++;
            }
        }
        // cout << x << " " << total << " " << y << " " << adj << endl;
        cout << min((x * total), (y * adj + x * (total - (2 * adj)))) << endl;
    }
    return 0;
}