#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if ((n + 1) / 2 >= m)
        {

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j && i % 2 == 0 && m > 0)
                    {
                        cout << "R";
                        m--;
                    }
                    else
                        cout << ".";
                }
                cout << endl;
            }
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}