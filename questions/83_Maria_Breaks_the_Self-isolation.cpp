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
        sort(arr, arr + n);
        int temp = 0, ans = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            // cout << arr[i] << " " << i << endl;
            if (arr[i] <= i + 1)
            {
                // cout << arr[i] << " " << i << endl;
                ans = i;
                break;
            }
        }
        if(ans==-1)
        cout<<1<<endl;
        else
        cout << ans + 2 << endl;
    }
    return 0;
}