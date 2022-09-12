/* Editor: Omkar Ugale
DATE - 01-Aug-2022 TIME - 21:42:55*/
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
bool comp(string a, string b)
{
    return a.size() < b.size();
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        string s;
        cin >> s;
        int n;
        cin >> n;
        vector<string> arr(n);
        vector<int> p(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end(), comp);
        vector<pair<int, int>> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            int k = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] != arr[i][k])
                    k = 0;
                else
                {
                    int temp = j;
                    while (s[j] == arr[i][k])
                    {
                        k++, j++;
                        if (k == arr[i].size())
                        {
                            p[i] = 1;
                            break;
                        }
                    }
                    for (int x = temp; x <= j; x++)
                    {
                        p[x] = 1;
                    }
                }
            }
        }
    }
    return 0;
}