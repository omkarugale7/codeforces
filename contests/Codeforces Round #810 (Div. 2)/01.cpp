/* Editor: Omkar Ugale
DATE - 24-Jul-2022 TIME - 20:05:31*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
         for (int i = 2; i <=n; i++)
         cout<<i<<" ";
         cout<<1<<endl;
        //  cout<<endl;
         
        
        // PrintArr(arr);
    }
    return 0;
}