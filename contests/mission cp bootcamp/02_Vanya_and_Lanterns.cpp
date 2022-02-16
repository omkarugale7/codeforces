#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n);
    int start = num[0] * 2;
    int end = (l - num[n - 1]) * 2;
    int diff = max(start, end);
    for (int i = 1; i < n; i++)
    {
        int temp = num[i] - num[i - 1];
        diff = max(diff, temp);
    }
    float ans = float(diff) / 2;
    cout << fixed << setprecision(9) << (double)ans;
    return 0;
}