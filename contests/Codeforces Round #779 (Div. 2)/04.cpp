/*Editor: Omkar Ugale
Time : .  26th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int arr[r + 1];
        for (int i = 0; i <= r; i++)
        {
            cin >> arr[i];
        }
        if (r % 2 == 0)
        {
            int f = 0;
            for (int i = 0; i <= r; i++)
            {
                f ^= i;
                f^=arr[i];
            }
            cout<<f<<endl;
        }
        else
        {
            sort(arr,arr+r+1);
            cout<<arr[0]<<endl;
        }
    }
    return 0;
}