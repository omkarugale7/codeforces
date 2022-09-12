/* Editor: Omkar Ugale
DATE - 21-Aug-2022 TIME - 16:13:31*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
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
        int n, t;
        cin >> n >> t;
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                odd++;
            else
                even++;
        }
        if (odd % 2 == 0)
            odd--;
        odd = min(odd,t);
        if (even >=(t-odd))
            cout << "Yes" << endl;
        else  
            cout << "No" << endl;
        // sort(arr.begin(), arr.end());
        // PrintArr(arr);
    }   
    return 0;
}