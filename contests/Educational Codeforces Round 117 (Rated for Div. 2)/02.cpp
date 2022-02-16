#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if ((a + b == n + 1) || (a == n / 2 && b == n))
        {
            cout << a << " ";
            for (int i = 1; i <= n / 2; i++)
            {
                int print = (n / 2) + i;
                if (print == b || print == a)
                    continue;
                cout << print << " ";
            }
            for (int i = 1; i <= n / 2; i++)
            {
                if (i == b || i == a)
                    continue;
                cout << i << " ";
            }
            cout << b << endl;
        }
        
       if((n-a)<n/2)
            cout << -1 << endl;
    }

    return 0;
}