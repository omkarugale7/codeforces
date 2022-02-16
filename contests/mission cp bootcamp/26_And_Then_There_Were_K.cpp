#include <iostream>

using namespace std;
define int long long 
const int mod =1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 30; i >= 0; i--)
        {
            if ((1 << i) & n)
            {
                int ans = (1ll << i) - 1;
                cout << ans << endl;
            }
        }
    }

    return 0;
}