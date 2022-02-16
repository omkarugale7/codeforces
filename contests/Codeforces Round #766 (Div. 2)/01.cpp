/*Editor: Omkar Ugale
Time : 8.10  15th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        bool ek_tari_ahe_ka = false, tya_row_or_col_madhe_ahe_ka = false, tich_ahe_ka = false;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            for (int j = 0; j < m; j++)
            {
                if (i + 1 == r && j + 1 == c && arr[i][j] == 'B')
                    tich_ahe_ka = true;

                if (arr[i][j] == 'B')
                {
                    ek_tari_ahe_ka = true;
                }
                if ((i + 1 == r || j + 1 == c) && arr[i][j] == 'B')
                {
                    tya_row_or_col_madhe_ahe_ka = true;
                }
            }
        }
        if (tich_ahe_ka)
            cout << 0 << endl;
        else if (tya_row_or_col_madhe_ahe_ka)
            cout << 1 << endl;
        else if (ek_tari_ahe_ka)
            cout << 2 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}