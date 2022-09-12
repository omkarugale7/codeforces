/* Editor: Omkar Ugale
DATE - 15-Jul-2022 TIME - 19:17:34*/
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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll cnt = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]==0 && cnt)
                cnt++;
            else if (arr[i]) 
                cnt += arr[i]; 
        }
        cout<<cnt<<endl;
    }
    return 0;
}