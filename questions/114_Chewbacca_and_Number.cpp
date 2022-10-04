/* Editor: Omkar Ugale
DATE - 18-Sep-2022 TIME - 15:07:37*/
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
        string s;
        cin >> s;
        if (s[0] != '9')
            s[0] = (char)(min(s[0] - '0', 9 - (s[0] - '0')) + '0');
        for (int i = 1; i < s.size(); i++) 
            s[i] = (char)(min(s[i] - '0', 9 - (s[i] - '0')) + '0');
        cout << s << endl; 
    return 0;
}