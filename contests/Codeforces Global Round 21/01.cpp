/* Editor: Omkar Ugale
DATE - 25-Jun-2022 TIME - 20:02:19*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        int orz = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
           orz=max(orz,arr[i]|m);
        } 
        cout<<(orz)<<endl;
    }
    return 0;
}