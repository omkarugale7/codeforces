/* Editor: Omkar Ugale
DATE - 12-Jun-2022 TIME - 20:07:46*/
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
        int arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > m)
            {
                ans += arr[i] - m;
                m=0;
            }
            else
            {
                m -= arr[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}