/* Editor: Omkar Ugale
DATE - 30-Aug-2022 TIME - 20:38:56*/
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
        vector<int> arr(n, 0);
        vector<int> a;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                arr[i] = i;
            else
                arr[i] = n - i - 1;
            if (s[i] == 'L' && i < n - i - 1)
                a.push_back(n - i - 1 - i);
            else if (s[i] == 'R' && i > n - i - 1)
                a.push_back(i - (n - i - 1));
        } 
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
            ans += arr[i];
        for (int i = 0; i < a.size(); i++)
        {
            ans+=a[i];
            cout <<  ans << " ";
        }
        for (int i = a.size(); i < n; i++)
            cout << ans << " ";
        cout << endl;
    }
    return 0;
}