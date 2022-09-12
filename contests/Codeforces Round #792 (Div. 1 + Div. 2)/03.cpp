/* Editor: Omkar Ugale
Time : . 19th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    vector<vector<int>> temp = arr;
    for (int i = 0; i < n; i++)
        sort(temp[i].begin(), temp[i].end());
    vector<int> positions;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (temp[i][j] != arr[i][j])
                positions.push_back(j);
        }
        if (positions.size() != 0)
            break;
    }
    if (positions.size() == 0)
    {
        cout << "1 1" << endl;
        return;
    }
    else if (positions.size() != 2)
    {
        cout << "-1" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> Temppositions;
        for (int j = 0; j < m; j++)
        {
            if (temp[i][j] != arr[i][j])
                Temppositions.push_back(j);
        }
        if (Temppositions.size() == 0 || Temppositions.size() == 2)
        {
            if (Temppositions.size() == 2)
            {
                if (Temppositions[0] == positions[0] && Temppositions[1] == positions[1])
                    continue;
                else
                {
                    cout << "-1" << endl;
                    return;
                }
            }
            else
            {
                if (arr[i][positions[0]] == arr[i][positions[1]])
                    continue;
                else
                {
                    cout << "-1" << endl;
                    return;
                }
            }
        }
        else
        {
            cout << "-1" << endl;
            return;
        }
    }
    cout << positions[0] + 1 << " " << positions[1] + 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}