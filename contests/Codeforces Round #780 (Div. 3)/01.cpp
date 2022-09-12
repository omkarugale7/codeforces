/*Editor: Omkar Ugale
Time : .  31th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (!a)
            cout << 1 << endl;
        else
            cout << a + 2 * b + 1 << endl;
    }
    return 0;
}