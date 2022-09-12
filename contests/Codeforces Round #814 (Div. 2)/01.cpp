/* Editor: Omkar Ugale
DATE - 16-Aug-2022 TIME - 20:02:42*/
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
        int n,m;
        cin >> n>>m;
        // vector<int> arr(n, 0);
        // // map<int, int> m;
        // // set<int> s;
        // for (int i = 0; i < n; i++)
        //     cin >> arr[i];
        // sort(arr.begin(), arr.end());
        if(n%2&&m%2)
        cout<<"Tonya"<<endl;
        else if((n%2 && m%2==0 )||(n%2==0&&m%2))
        cout<<"Burenka"<<endl;
        else 
        cout<<"Tonya"<<endl;

        // PrintArr(arr);
    }
    return 0;
}