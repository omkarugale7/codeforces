/* Editor: Omkar Ugale
DATE - 03-Jun-2022 TIME - 20:04:44*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << 3 << endl;
        else if (((n) & (n - 1)) == 0)
            cout << n + 1 << endl;
        else
        {
            int k = 0;
            while (n >= 0)
            {
                if (n % 2)
                    break;
                n /= 2;
                k++;
            }
            cout << (1 << k) << endl;
        }
    }
    return 0;
}