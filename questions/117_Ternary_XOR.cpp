/* Editor: Omkar Ugale
DATE - 19-Sep-2022 TIME - 11:24:35*/
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
        string s;
        cin >> s;
        string a = "", b = "";
        bool onemila = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                a += '0', b += '0';
            else if (s[i] == '1')
            {
                if (!onemila)
                    a += '1', b += '0', onemila = true;
                else
                    a += '0', b += '1';
            }
            else
            {
                if (onemila)
                    a += '0', b += '2';
                else
                    a += '1', b += '1';
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}