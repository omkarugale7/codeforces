/*Editor: Omkar Ugale
Time : .  21th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll start = 0, end = n - 1, i = -1, j = -1;
        while (start < n - 1)
        {
            if (arr[start] == arr[start + 1])
            {
                i = start + 1;
                break;
            }
            else
                start++;
        }
        while (end > 0)
        {
            if (arr[end] == arr[end - 1])
            {
                j = end - 1;
                break;
            }
            else
                end--;
        }
        if ((i == -1 && j == -1) || (j < i))
            cout << 0 << endl;
        else if (j == i)
            cout << 1 << endl;
        else
        {
            // cout << i << " " << j << endl;
            cout << j - i << endl;
        }
    }
    return 0;
}