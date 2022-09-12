/* Editor: Omkar Ugale
DATE - 21-Jul-2022 TIME - 20:49:46*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        // sort(arr, arr + n);
        
        // PrintArr(arr);
    }
    return 0;
}