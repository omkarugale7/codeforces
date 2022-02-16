#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        set <ll> s;
        long long int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        ll count = 1;
        ll k = arr[0];
        s.insert(k);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == k)
                arr[i] = arr[i] - 2 * arr[i];
            else
                k = arr[i];
            s.insert(arr[i]);
        }        
        cout << s.size() << endl;
    }
    return 0;
}