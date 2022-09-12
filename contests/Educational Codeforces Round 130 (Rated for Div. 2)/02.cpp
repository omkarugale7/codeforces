/* Editor: Omkar Ugale
DATE - 12-Jun-2022 TIME - 20:12:17*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    reverse(arr, arr + n);
    int sum[n] = {0};
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + arr[i];
    // for (int i = 0; i < n; i++)
    //     cout << sum[i] << " ";
    // cout << endl;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;
        if(x!=y)
        cout << sum[x] - sum[x - y-1] << endl;
        else
        cout<<sum[x]<<endl;
        // cout<<sum[x]<<" "<<sum[x-y-1]<<endl;
        // x--, y--;
        // int k = sum[n - x + y - 1] - sum[n - x - 2];
        // cout << n - x + y - 1 << " " << n - x - 2 << endl;
        // cout << sum[n - x + y - 1] << " " << sum[n - x - 2] << endl;
        // cout << k << endl;
        // // cout<<xx-yy<<endl;
    }

    return 0;
}
// 5 3 1 5 2
// 5 5 3 1 2
// 5 10 13 14 16
// 3 2