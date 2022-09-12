/* Editor: Omkar Ugale
DATE - 14-Jun-2022 TIME - 21:41:15*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans = 0, temp = 1;
        for (int i = 1; i < n; i++)
        {
            if ((arr[i-1] * 1.0 / arr[i ]) < 2)
                temp++;
            else
            {
                ans += max(0, (temp - k));
                temp = 1;
            }
        }
        ans += max(0, (temp - k));
        cout << ans << endl;
    }
    return 0;
}