/* Editor: Omkar Ugale
DATE - 13-Sep-2022 TIME - 22:14:50*/
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
    int n;
    cin >> n;
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k % 2)
            odd.push_back(i+1);
        else
            even.push_back(i+1);
    }
    if (odd.size() == 1)
        cout << odd[0] << endl;
    else
        cout << even[0] << endl;
    // sort(arr.begin(), arr.end());

    // PrintArr(arr);

    return 0;
}