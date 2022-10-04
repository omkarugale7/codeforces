/* Editor: Omkar Ugale
DATE - 23-Sep-2022 TIME - 06:42:04*/
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
        string s;
        cin >> s;
        if (s.length() > 10)
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        else
        cout<<s<<endl;
    }
    return 0;
}