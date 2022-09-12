/* Editor: Omkar Ugale
DATE - 16-Jul-2022 TIME - 19:30:45*/
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
        bool hosakta = true;
        ll sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] % arr[i - 1])
            {
                hosakta = false;
                break;
            }
            else
            {
                arr[i] = arr[i - 1];
            }
        }
        if (hosakta)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}