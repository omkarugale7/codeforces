/* Editor: Omkar Ugale
DATE - 18-Jul-2022 TIME - 20:54:25*/
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n % 2)
        {
            int ans = 0;
            for (int i = 1; i < n; i++)
            {
                if (i % 2 && (arr[i - 1] >= arr[i] && arr[i + 1] >= arr[i]))
                {
                    int k = max(arr[i - 1], arr[i + 1]);
                    ans += (k - arr[i]) + 1;
                }
            }
            cout << ans << endl;
        }
        else
        {
            int ans = 0;
            for (int i = 1; i < n - 1; i++)
            {
                if (!(i % 2) && (arr[i - 1] >= arr[i] && arr[i + 1] >= arr[i]))
                {
                    int k = max(arr[i - 1], arr[i + 1]);
                    cout << k << " " << arr[i] << endl;
                    ans += (k - arr[i]) + 1;
                }
            }
            int bns = 0;
            for (int i = 1; i < n - 1; i++)
            {
                if ((i % 2) && (arr[i - 1] >= arr[i] && arr[i + 1] >= arr[i]))
                {
                    int k = max(arr[i - 1], arr[i + 1]);
                    ans += (k - arr[i]) + 1;
                }
            }
            ans = min(ans, bns);
            cout << ans << endl;
        }
    }
    return 0;
}