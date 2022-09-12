/* Editor: Omkar Ugale
DATE - 31-Jul-2022 TIME - 19:30:52*/
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
        int m, n;
        cin >> m >> n;
        string a, b;
        cin >> a >> b; 
        bool haikya = true;
        int k = m - 1;
        for (int i = n - 1; i > 0; i--)
        {
            if (a[k--] != b[i])
            {
                // cout<<i<<" "<<k<<endl;
                haikya = false;
                break;
            }
        }
        bool first = false;
        for (int i = 0; i <= m - n; i++)
        {
            if (a[i] == b[0])
            {
                first = true;
                break;
            }
        }
        if (first && haikya)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}