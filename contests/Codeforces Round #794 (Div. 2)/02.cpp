/* Editor: Omkar Ugale
DATE - 25-May-2022 TIME - 23:26:21*/
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
        int ans =0;
        for (int i = 1; i < n; i++)
        {
            if(arr[i]<arr[i-1])
            {
                ans++,i++;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}