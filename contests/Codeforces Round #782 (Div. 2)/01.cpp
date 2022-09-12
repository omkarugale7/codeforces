/*Editor: Omkar Ugale
Time : .  16th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b, r, k;
        cin >> n >> r >> b;
        k = r / (b + 1);
        // cout << k << endl;
        int rem = r % (b + 1);
        while (n > 0)
        {
            // cout<<n<<endl;
            int temp = k;
            while (temp--)
            {
                if (n <= 0)
                    break;
                cout << 'R';
                // cout << n << endl;
                n--, r--;
            }
            if (n <= 0)
                break;
            if (b > 0)
            {
                cout << 'B';
                b--, n--;
                if (rem > 0)
                {
                    cout << 'R';
                    rem--,r--, n--;
                }
            }
            // cout << n << endl;
        }
        while (r>0)
            cout << 'R';
        // cout << n << endl;
        cout << endl;
    }
    // RRB RRB RRB RRB RRB RRB RRB
    // RRB RRB RRB RRB RRB RRB RR
    return 0;
}