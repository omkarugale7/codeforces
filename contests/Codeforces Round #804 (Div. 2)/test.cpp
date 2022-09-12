/* Editor: Omkar Ugale
DATE - 04-Jul-2022 TIME - 20:06:55*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << ((a ^ b) + (b ^ c) + (c ^ a)) << endl;
    }
    return 0;
}