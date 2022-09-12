/* Editor: Omkar Ugale
DATE - 25-Jun-2022 TIME - 10:02:21*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll i = 0, sum = 0;
        bool pos = false;
        if (arr[i] > 0)
            pos = true;
        while (i < n)
        {
            if (pos)
            {
                ll currele = arr[i];
                i++;
                while (arr[i] > 0&&i<n)
                {
                    currele = max(currele, arr[i]);
                    i++;
                }
                sum += currele;
                pos = false;
            }
            else
            {
                ll currele = arr[i];
                i++;
                while (arr[i] < 0&&i<n)
                {
                    currele = max(currele, arr[i]);
                    i++;
                }
                sum += currele;
                pos = true;
            }
        }
        cout << sum << endl;
    }
    return 0;
}