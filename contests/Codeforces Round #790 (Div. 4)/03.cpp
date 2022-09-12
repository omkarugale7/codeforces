/* Editor: Omkar Ugale
Time : . 10th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int diff(char a, char b)
{
    int x, y;
    return (abs(a - b ));
}

// if (a == 'a')
//     x = 1;
// if (b == 'a')
//     x = 1;
// if (a == 'z')
//     x = 26;
// if (b == 'z')
//     x = 26;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = INT_MAX, tempans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    tempans += diff(arr[i][k], arr[j][k]);
                    // cout << arr[i][k] << " " << arr[j][k] << " " << tempans << endl;
                }
                ans = min(ans, tempans);
                tempans = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}