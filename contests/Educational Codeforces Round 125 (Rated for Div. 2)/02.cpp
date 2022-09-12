/*Editor: Omkar Ugale
Time : .  22th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b, x, y;
        cin >> n >> b >> x >> y;
        int arr[n+1];
        arr[0] = 0;
        for (int i = 1; i < n+1; i++)
        {
            if (arr[i - 1] + x > b)
                arr[i] = arr[i - 1] - y;
            else 
            arr[i]=arr[i-1]+x;
        }
        ll sum = 0;
        for (int i = 0; i < n+1; i++)
        sum+=arr[i];
        cout<<sum<<endl;
        
    }
    return 0;
}