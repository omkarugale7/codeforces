/* Editor: Omkar Ugale
DATE - 23-May-2022 TIME - 20:19:20*/
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
        int m;
        cin >> m;
        int brr[m];
        for (int i = 0; i < m; i++)
            cin >> brr[i];
        ll sum = accumulate(brr, brr + m, 0);
        sum = sum % n;
        // sum++;
        cout << arr[sum] << endl;
    }
    return 0;
}