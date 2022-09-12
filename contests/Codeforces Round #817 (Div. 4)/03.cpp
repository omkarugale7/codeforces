/* Editor: Omkar Ugale
DATE - 30-Aug-2022 TIME - 20:32:47*/
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
        map<string, int> m;
        string arr[n];
        string brr[n];
        string crr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            m[brr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> crr[i];
            m[crr[i]]++;
        }
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[arr[i]] == 1)
                a += 3;
            else if (m[arr[i]] == 2)
                a++;
            if (m[brr[i]] == 1)
                b += 3;
            else if (m[brr[i]] == 2)
                b++;
            if (m[crr[i]] == 1)
                c += 3;
            else if (m[crr[i]] == 2)
                c++;
        }
        cout << a << " " << b << " " << c << endl;
         // sort(arr.begin(), arr.end());
                                                   // PrintArr(arr);
    }
    return 0;
}