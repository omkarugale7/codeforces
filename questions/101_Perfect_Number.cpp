/* Editor: Omkar Ugale
DATE - 12-Sep-2022 TIME - 11:38:34*/
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
    int no = 0;
    for (int i = 1; i <= 1e9 + 1; i++)
    {
        string s = to_string(i);
        int aa = 0;
        for (int j = 0; j < s.size(); j++)
            aa += s[j] - '0';
        if (aa == 10)
            no++;
        if (no == n)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}