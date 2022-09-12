/* Editor: Omkar Ugale
DATE - 31-May-2022 TIME - 20:18:34*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        map<ll, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]].push_back(i);
        }
        bool twosechhotahaikya = false;
        for (auto it : m)
        {
            if (it.second.size() > 1)
            {
                for (int i = 0; i < it.second.size(); i++)
                    arr[it.second[i]] =  it.second[(i + 1) % it.second.size()] ;
            }
            else
                twosechhotahaikya = true;
        }
        if (twosechhotahaikya)
            cout << "-1" << endl;
        else
        {
            for (int i = 0; i < n; i++)
                cout << arr[i] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}