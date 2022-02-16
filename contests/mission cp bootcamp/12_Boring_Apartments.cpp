#include <iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin >> x;
        int n = x;
        int rem = x % 10;
        int c = 0;
        while (n != 0)
        {
            n /= 10;
            c++;
        }
        int ans = ((10 * (rem - 1)) + (c * (c + 1)) / 2);
        cout << ans << endl;
    }

    return 0;
}