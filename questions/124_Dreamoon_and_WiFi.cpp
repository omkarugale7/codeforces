/* Editor: Omkar Ugale
DATE - 01-Oct-2022 TIME - 09:29:51*/
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
        string i, f;
        cin >> i >> f;
        int ip = 0, im = 0, fp = 0, fm = 0, fq = 0;
        for (int j = 0; j < i.size(); j++)
        {
            if (i[j] == '+')
                ip++;
            else
                im++;
            if (f[j] == '+')
                fp++;
            else if (f[j] == '-')
                fm++;
            else
                fq++;
        }
        float ans = 0;
        if (ip == fp && im == fm)
        {
            ans++;
            cout << ans << endl;
        }

        // PrintArr(arr);
    }
    return 0;
}