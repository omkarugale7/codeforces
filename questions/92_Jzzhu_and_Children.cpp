/* Editor: Omkar Ugale
DATE - 11-Jun-2022 TIME - 21:34:19*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n];
    int ans = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (ceil(arr[i] * 1.0 / m) >= temp)
            ans = i + 1, temp = ceil(arr[i]*1.0 / m); 
    }
    cout << ans << endl;

    return 0;
}