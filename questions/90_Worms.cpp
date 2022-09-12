/*Editor: Omkar Ugale
Time : .  16th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int crr[n] = {arr[0]};
        for (int i = 1; i < n; i++)
            crr[i] = crr[i - 1] + arr[i];
        int m;
        cin >> m;
        int brr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> brr[i];
            auto it = lower_bound(crr, crr + n, brr[i]);
            cout << it - crr +1 << endl;
        }
   
    return 0;
}