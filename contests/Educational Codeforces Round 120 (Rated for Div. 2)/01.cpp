#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        ll arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr, arr + 3);
        if ((arr[2] == arr[0] + arr[1]) )
            cout << "YES" << endl;
        else if (((arr[0] == arr[1]) && (arr[2] % 2 == 0)) || ((arr[2] == arr[1]) && (arr[0] % 2 == 0)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
          
    return 0;
}