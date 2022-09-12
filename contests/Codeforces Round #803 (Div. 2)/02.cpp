/* Editor: Omkar Ugale
DATE - 28-Jun-2022 TIME - 20:24:51*/
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
        int ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > (arr[i - 1] + arr[i + 1]))
                ans++;
        }
        if(k>1)
        cout<<ans<<endl;
        else
        cout<<(n-1)/2<<endl;
    }
    return 0;
}