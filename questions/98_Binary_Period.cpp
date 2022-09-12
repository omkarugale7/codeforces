/* Editor: Omkar Ugale
DATE - 21-Aug-2022 TIME - 15:38:02*/
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
        string t;
        cin >> t;
        int ones = 0, zeros = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] - '0')
                zeros++;
            else
                ones++;
        } 
        if (ones == t.size())
        {
            for (int i = 0; i < t.size(); i++)
                cout << 0;
            cout << endl;
        }
        else if (zeros == t.size())
        {
            for (int i = 0; i < t.size(); i++)
                cout << 1;
            cout << endl;
        }
        else
        {
            for (int i = 0; i < 2*max(ones, zeros); i++)
                cout << "10";
            cout << endl;
        }
    }
    return 0;
}