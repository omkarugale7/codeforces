/* Editor: Omkar Ugale
DATE - 14-Jun-2022 TIME - 20:08:31*/
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
        map<int, int> arr;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            arr[k]++;
        }
        int ans = 0;
        for (auto it : arr)
        {
            ans += (it.second-1)  ;
            // cout<<ans<<" "<<it.second<<endl;
        }
        if(ans%2)
        ans++;
        cout << n-ans << endl;
    }
    return 0;
}