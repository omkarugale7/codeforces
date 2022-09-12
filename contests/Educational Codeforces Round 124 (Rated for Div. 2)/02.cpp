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
        bool sahihai = true;
        for (int i = 0; i < n; i++)
        {
            if (pow(3, i) >= 1e9)
            {
                sahihai = false;
                break;
            }
            else
                arr[i] = pow(3, i);
        }
        if (sahihai)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}