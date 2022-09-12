/* Editor: Omkar Ugale
DATE - 25-Jun-2022 TIME - 20:55:17*/
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
        bool zeromilakya = true;
        int cnt = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (!arr[i])
                z++;
            if (arr[i] != 0 && zeromilakya)
            {
                zeromilakya = false;
            }
            else if (arr[i] == 0 && !zeromilakya)
            {
                cnt++;
                zeromilakya = true;
            }
        }
        if(!zeromilakya)
        cnt++;
        if (z == n)
            cout << 0 << endl;
       else if (cnt <2)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}