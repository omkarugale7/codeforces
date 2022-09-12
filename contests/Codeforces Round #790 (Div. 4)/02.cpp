/* Editor: Omkar Ugale
Time : . 10th May 2022 */
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
        int minn =INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            minn = min(minn,arr[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += arr[i]-minn;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}