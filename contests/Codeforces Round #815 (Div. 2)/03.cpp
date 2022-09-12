/* Editor: Omkar Ugale
DATE - 18-Aug-2022 TIME - 19:37:58*/
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
        int n, m;
        cin >> n >> m;
        string arr[n];
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool ekbhinahi = false, ekhai = false, doaurjyadahai = false;
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '0')
                {
                    // cout << "a" << endl;
                    // cout<<i<<" "<<j<<endl;
                    ekhai = true;
                    if (i + 1 < n && arr[i + 1][j] == '0')
                    {
                        // cout << "b" << endl;
                        doaurjyadahai = true;
                    }
                    else if (i - 1 >= 0 && arr[i - 1][j] == '0')
                    {
                        // cout << "c" << endl;
                        doaurjyadahai = true;
                    }
                    else if (j + 1 < m && arr[i][j + 1] == '0')
                    {
                        // cout << "d" << endl;
                        doaurjyadahai = true;
                    }
                    else if (j - 1 >= 0 && arr[i][j - 1] == '0')
                    {
                        // cout << "e" << endl;
                        doaurjyadahai = true;
                    }
                    else if (i + 1 < n && j + 1 < m && arr[i + 1][j + 1] == '0')
                    {
                        // cout << "e" << endl;
                        doaurjyadahai = true;
                    }
                    else if (i - 1 >= 0 && j - 1 >= 0 && arr[i - 1][j - 1] == '0')
                    {
                        // cout << "e" << endl;
                        doaurjyadahai = true;
                    }
                    else if (i + 1 < n && j - 1 >= 0 && arr[i + 1][j - 1] == '0')
                    {
                        // cout << "e" << endl;
                        doaurjyadahai = true;
                    }
                    else if (i - 1 >= 0 && j + 1 < m && arr[i - 1][j + 1] == '0')
                    {
                        // cout << "e" << endl;
                        doaurjyadahai = true;
                    }
                }
                else
                {
                    // cout << "fffffffff" << endl;
                    ones++;
                }
            }
        }
        if (ones == 0)
            cout << 0 << endl; 
        else if (doaurjyadahai)
            cout << ones << endl;
        else if (ekhai)
            cout << ones - 1 << endl;
        else
            cout << ones - 2 << endl;
        // sort(arr.begin(), arr.end());
        // PrintArr(arr);
    }
    return 0;
}