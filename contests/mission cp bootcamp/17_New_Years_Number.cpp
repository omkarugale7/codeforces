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
        if (n < 2020)
        {
            cout << "NO" << endl;
        }
        else
        {
            int rem = n % 2020;
            int div = n / 2020;
            if (rem <= div)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}