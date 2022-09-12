/* Editor: Omkar Ugale
DATE - 10-Jul-2022 TIME - 20:47:45*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]].push_back(i);
        }
        for (auto it : m)
        {
            sort(it.second.begin(), it.second.end());
        }
        for (int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            if (m[a].size() == 0 || m[b].size() == 0)
                cout << "NO" << endl;
            else
            { 
                int aa = m[a][0];
                int bb = m[b][m[b].size() - 1];
                if (aa <= bb)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}