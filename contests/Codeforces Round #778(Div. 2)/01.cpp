/*Editor: Omkar Ugale
Time : .  20th March 2022 */
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
            int minn = INT_MAX,maxn = 0 , minind = 0 , maxind =0;
        for (int i = 0; i <n; i++)
        {
             minn=min(minn,arr[i]);
             if(minn==arr[i])
             minind=i+1;
             maxn=max(maxn,arr[i]);
             if(maxn==arr[i])
             maxind=i+1;
        }
        cout<<minind<<" "<<maxind<<endl;
        
    }
    return 0;
}