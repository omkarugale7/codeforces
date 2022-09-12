/* Editor: Omkar Ugale
DATE - 15-Jul-2022 TIME - 19:05:47*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n>>x;
        int arr[2*n];
        for (int i = 0; i < 2*n; i++)
            cin >> arr[i];
        sort(arr,arr+2*n);
        bool hopaya = true;
        for (int i = 0; i < n; i++)
        {
             if(arr[i]+x<=arr[i+n])
             {
                // cout<<arr[i]<<" "<<x+arr[i+n]<<endl;
                continue;
             }
             else
             { 
                hopaya = false;
                break;
             }
        }
        if(hopaya)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    return 0;
}