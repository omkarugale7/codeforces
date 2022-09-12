/* Editor: Omkar Ugale
DATE - 12-Jul-2022 TIME - 20:42:38*/
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
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            for (int j = 0; j < n; j++)
                arr[i][j] = temp[j] - '0';
        }
        int startrow = 0, startcol = 0;
        int endrow = n - 1, endcol = n - 1;
        int ans = 0;
        while (startrow < endrow && startcol < endcol)
        {
            int i = startrow;
            int temp = 0;
            while (i < endrow)
            {
                temp += arr[startrow][i];
                temp += arr[endrow][n - i - 1];
                temp += arr[n - i - 1][startcol];
                temp += arr[i][endcol];
                i++;
                if (temp < 3)
                    ans += temp;
                else if (temp == 3)
                    ans += 1;
                else if (temp == 4)
                    ans += 0;
            temp=0;
            }
            startcol++, startrow++, endcol--, endrow--;
        }
        cout << ans << endl;
    }
    return 0;
}