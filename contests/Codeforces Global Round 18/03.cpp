#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int same = 0, diff = 0;
        string aa, bb;
        cin >> aa >> bb;
        bool hai = false;
        for (int i = 0; i < n; i++)
        {
            if (aa[i] == '1')
                hai = true;
        }

        for (int i = 0; i < n; i++)
        {
            if (aa[i] == bb[i])
                same++;
            else
                diff++;
        }
        if (hai == false)
            cout << -1 << endl;
        else
            cout <<min(same,diff) << endl;
    }

    return 0;
}