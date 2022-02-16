#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int real_n = n;
        int digit = -1, rem;
        while (n != 0)
        {
            rem = n % 10;
            n /= 10;
            digit++;
        }
        string s = to_string(rem);
        string a = s;
        for (int i = 0; i < digit; i++)
        {
            s += a;
        }
        int add = stoi(s);
        int ans = digit * 9 + rem;
        if (real_n < add)
        {
            ans--;
            cout << ans << endl;
        }
        else
            cout << ans << endl;
    }

    return 0;
}