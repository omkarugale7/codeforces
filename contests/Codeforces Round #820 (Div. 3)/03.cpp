/* Editor: Omkar Ugale
DATE - 12-Sep-2022 TIME - 20:52:54*/
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
bool comp(pair<char, int> p1, pair<char, int> p2)
{
    return p1.first < p2.first;
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
        int n = s.size();
        vector<int> v;
        cout << abs(s[0] - s[s.size() - 1]) << " ";
        if (s[0] < s[n - 1])
        {
            for (int i = 0; i <= 25; i++)
            {
                char t = s[0] + i;
                if (t == s[n - 1] + 1)
                    break;
                for (int j = 0; j < s.size(); j++)
                {
                    if (s[j] == t)
                        v.push_back(j + 1);
                }
            }
        }
        else
        {
            for (int i = 0; i <= 25; i++)
            {
                char t = s[0] - i;
                if (t == s[n - 1] - 1)
                    break;
                for (int j = 0; j < s.size(); j++)
                {
                    if (s[j] == t)
                        v.push_back(j + 1);
                    // cout<<j+1<<" ";
                }
            }
        }
        cout << v.size() << endl;
        PrintArr(v);
    }
    return 0;
}