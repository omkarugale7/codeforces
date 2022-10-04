/* Editor: Omkar Ugale
DATE - 24-Sep-2022 TIME - 23:35:44*/
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
    int ans = 0;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>1)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}