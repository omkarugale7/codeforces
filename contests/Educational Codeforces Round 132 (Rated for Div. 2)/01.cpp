/* Editor: Omkar Ugale
DATE - 21-Jul-2022 TIME - 20:07:25*/
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
        int arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        if (arr[n - 1])
        {
            if (arr[arr[n - 1]-1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
            else
            {
                cout << "NO" << endl;
            }
    }
    return 0;
}