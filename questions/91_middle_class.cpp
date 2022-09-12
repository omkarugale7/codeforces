/*Editor: Omkar Ugale
Time : .  21th April 2022 */
#include <bits/stdc++.h>

using namespace std; 
#define int long long int
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int ans = 0, temp = 0, cnt = 0;
        // n--;
        while (n--)
        {
            temp += arr[n];
            cnt++;
            // cout << temp << " j " << cnt << endl;
            if (temp / cnt < x)
            {
                cnt--;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}