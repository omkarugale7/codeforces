/* Editor: Omkar Ugale
DATE - 03-Jun-2022 TIME - 20:14:13*/
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
        bool oddhaikya = false;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                oddhaikya = true;
            else
                cnt++;
        }
        if (oddhaikya)
            cout << cnt << endl;
        else
        {
            int cntt = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                int temp = 0;
                while (arr[i] >= 0)
                {
                    if (arr[i] % 2)
                        break;
                    else
                        arr[i] /= 2;
                    temp++;
                }
                cntt = min(cntt, temp);
                // cout << temp << " " << cntt << endl;
            }
            cout << cntt + cnt-1 << endl;
        }
    }
    return 0;
}