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
        int count = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
            else
            {
                if(count>0)
                ans += count + 1;
                count = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}