#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
            cout << "-1" << endl;
        else
        {
            int ans[n][n], k = 1;
            for (int i = 0; i < n; i++)
            {
                ans[i][i] = k++;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    if (i == j)
                        continue;
                    ans[i][j] = k++, ans[j][i] = k++;
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << ans[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}