#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0;
        cin >> n;
        if (n % 2 == 0)
            cout << 0 << endl;
        else
        {
            int i = 0, index = 0;
            while (n > 0)
            {
                temp = n % 10;
                n /= 10;
                if (temp % 2 == 0)
                    index = i;
                i++;
            }
            i--;
            if (index == 0)
                cout << -1 << endl;
            else if (i == index)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}