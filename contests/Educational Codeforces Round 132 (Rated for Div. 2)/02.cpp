/* Editor: Omkar Ugale
DATE - 21-Jul-2022 TIME - 20:11:29*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    
        ll n,m;
        cin >> n>>m;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll prefixSum[n] = {0};
        for (int i = 1; i < n; i++)
        {
            int temp = 0;
            if (arr[i - 1] > arr[i])
                temp = arr[i - 1] - arr[i]; 
            prefixSum[i] = prefixSum[i - 1] + temp;
        }
        ll suffixSum[n] = {0};
        for (int i = n - 2; i >= 0; i--)
        {
            int temp = 0;
            if (arr[i + 1] > arr[i])
                temp = arr[i + 1] - arr[i];
            suffixSum[i] = suffixSum[i + 1] + temp;
        } 
        for (int i = 0; i < m; i++)
        {
            ll a,b;
            cin >> a>>b;
            if(a<=b)
            cout<<prefixSum[b-1]-prefixSum[a-1]<<endl;
            else
            cout<<suffixSum[b-1]-suffixSum[a-1]<<endl;
        }
        
    
    return 0;
}