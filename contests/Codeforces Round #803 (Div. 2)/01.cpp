/* Editor: Omkar Ugale
DATE - 28-Jun-2022 TIME - 19:58:38*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int son()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            ans = ans ^ arr[j];
            // cout<<ans<<" "<<arr[j]<<endl;
        }
        if (ans == arr[i])
            return ans;
            // cout<<"new "<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << son() << endl;
    }
    return 0;
}