/* Editor: Omkar Ugale
Time : . 2nd May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int div = y / x;
        int a = 1, b = 1;
        bool milakya = false;
        cout << div << endl;
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                cout << i << " " << j << endl;
                cout << pow(i, j) << " " << div << endl;
                if (div == pow(i, j))
                {
                    a = j, b = i;
                    milakya = true;
                    break;
                }
                if (milakya)
                    break;
            }
        }
        if (milakya)
            cout << a << " " << b << endl;
        else
            cout << 0 << " " << 0 << endl;
    }
    return 0;
}