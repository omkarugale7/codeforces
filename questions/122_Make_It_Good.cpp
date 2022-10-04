/* Editor: Omkar Ugale
DATE - 01-Oct-2022 TIME - 08:51:14*/
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
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        // sort(arr.begin(), arr.end());
        int j = n - 1;
        bool dechaikya = false, inchaikya = false;
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        if (arr == temp)
            inchaikya = true;
        sort(temp.begin(), temp.end(), greater<int>());
        if (arr == temp)
            dechaikya = true;
        while (arr[j - 1] >= arr[j])
        {
            j--;
        }
        // cout << "j " << j << endl;
        while (arr[j - 1] <= arr[j])
            j--;
        // cout << "j " << j << endl;
        if (inchaikya || dechaikya)
            cout << 0 << endl;
        else
        {
            cout <<   j << endl;
        }

        // PrintArr(arr);
    }
    return 0;
}