#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    bool haikyawaisapair = false;
    for (int i = 2; i < n; i++)
    {
        if (arr[i - 2] + arr[i - 1] > arr[i])
        {
            haikyawaisapair = true;
            break;
        }
    }
    if (haikyawaisapair)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}