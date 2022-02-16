#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int num[m];
    for (int i = 0; i < m; i++)
    {
        cin >> num[i];
    }
    sort(num, num + m);
    int diff = 10000000;
    for (int i = 0; i <= m - n; i++)
    {
        int rem = num[n + i - 1] - num[i];

        diff = min(diff, rem);
    }
    cout << diff << endl;
    return 0;
}