/* Editor: Omkar Ugale
DATE - 18-Sep-2022 TIME - 15:24:56*/
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
        int n, k;
        cin >> n >> k;
        if (k > n)
            cout << "NO" << endl;
        else if (n % 2 && k % 2 == 0)
            cout << "NO" << endl;
        else if ((n % 2 && k % 2) || (n % 2 == 0 && k % 2 == 0))
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
                cout << 1 << " ";
            cout << (n - k + 1) << endl;
        }
        else if (n % 2 == 0 && k % 2)
        {
            // cout<<"abhya"<<endl;
            if (n / k >= 2)
            {
                cout << "YES" << endl;
                for (int i = 0; i < k - 1; i++)
                    cout << 2 << " ";
                cout << (n - 2 * k + 2) << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}