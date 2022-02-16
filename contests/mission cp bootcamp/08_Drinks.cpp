#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n];
   long int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        total += num[i];
    }
    double ans = float(total) / n;
    cout << fixed << setprecision(9) << (double)ans << endl;

    return 0;
}