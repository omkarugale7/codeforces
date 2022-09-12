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
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        ll start = arr[0] , end = 0;
        bool milgaya = false;
        for (int i = 1; i < n; i++)
        {
            if (i >= n - i)
                break;
            start += arr[i], end += arr[n - i];
            if (start < end)
            {
                // cout << start << " " << end << endl;
                milgaya = true;
                break;
            }
        }
        if (milgaya)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}