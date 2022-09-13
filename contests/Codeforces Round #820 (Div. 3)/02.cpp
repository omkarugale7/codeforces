/* Editor: Omkar Ugale
DATE - 12-Sep-2022 TIME - 20:09:29*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
// #define int long long int
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
        string s;
        cin >> s;
        string a = "";
        int i = n - 1;
        while (i >= 0)
        {
            if (s[i] == '0')
            {
                string t = "";
                t += ('a' - 1 + int(s[i - 1] - '0') + 10*int(s[i - 2] - '0'));
                // cout << "t" << t << endl;
                a = t + a;
                i -= 3;
            }
            else
            {
                string t = "";
                // cout << s[i] << endl;
                t += ('a' - 1 + int(s[i] - '0'));
                a = t + a;
                i--;
            }
        }
        cout << a << endl;
    }
    return 0;
}