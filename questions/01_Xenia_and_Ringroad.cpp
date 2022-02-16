#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    long long int sum = 0, current = 1;
    for (int i = 0; i < m; i++)
    {
        if (v[i] >= current)
            sum += v[i] - current;
        else
            sum += n + v[i] - current;
        current = v[i];
        // cout << sum << " " << current << endl;
    }
    cout << sum << endl;

    return 0;
}