#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> num[i];
        }
        int finalist[2];
        finalist[0] = max(num[0], num[1]);
        finalist[1] = max(num[2], num[3]);
        sort(num, num + 4);
        if ((num[2] + num[3]) == (finalist[0] + finalist[1]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}