/* Editor: Omkar Ugale
DATE - 18-Jul-2022 TIME - 20:35:42*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
            m[arr[i]].push_back(i + 1);
        int ans[n + 1] = {0};
        for (auto it : m)
        {
            unsigned int odd = 1;
            int temp = it.second[0];
            if (it.second.size() < 2)
                ans[it.first] = 1;
            else
            {
                for (int i = 1; i < it.second.size(); i++)
                {
                    if ((it.second[i] - it.second[i - 1]) % 2)
                    {
                        odd++;
                    }
                }
                ans[it.first] = odd;
            }
        }
            for (int i = 1; i <= n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return 0;
    }