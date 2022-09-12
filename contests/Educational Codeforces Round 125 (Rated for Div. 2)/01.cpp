/*Editor: Omkar Ugale
Time : .  22th March 2022 */
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
        int ans = 0, a = sqrt((x * x) + (y * y));
        if (x == y && y == 0)
            ans = 0;
        else if (a * a == (x * x + y * y))
            ans = 1;
        else
            ans = 2;
        cout << ans << endl;
    }
    return 0;
}