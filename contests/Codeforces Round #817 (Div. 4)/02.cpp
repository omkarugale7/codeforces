/* Editor: Omkar Ugale
DATE - 30-Aug-2022 TIME - 20:28:03*/
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
       string a,b;
       cin>>a>>b;
       bool haikya = true;
       for (int i = 0; i < n; i++)
       {
            if(a[i]=='R'&&b[i]=='R')
            continue;
            else if((a[i]=='G'&&b[i]=='B')||(a[i]=='B'&&b[i]=='G'))
            continue;
            else if((a[i]=='G'&&b[i]=='G')||(a[i]=='B'&&b[i]=='B'))
            continue;
            else
            haikya = false;
       }
       if(haikya)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;

       
    }
    return 0;
}