#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
   
        int n;
        cin >> n;
        int ans =0;
        for (int i = 1; i < n; i++)
        {
            ans+=i*(n-i);
        }
        ans+=n;
        cout<<ans<<endl;
        
    
    return 0;
}