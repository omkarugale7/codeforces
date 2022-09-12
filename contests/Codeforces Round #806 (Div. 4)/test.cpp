/* Editor: Omkar Ugale
DATE - 12-Jul-2022 TIME - 21:06:39*/
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
        int t = 1;
        int k = n--;
        while (k > 1)
        {
            cout<<k<<endl;
            t += k;
            k -= 2;
        }
    }
    return 0;
}