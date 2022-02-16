#include <iostream>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int w, h, n;
        cin >> w >> h >> n;
        int countw = 1, counth = 1, ans;
        while (w % 2 == 0)
        {
            countw *= 2;
            w /= 2;
        }
        while (h % 2 == 0)
        {
            counth *= 2;
            h /= 2;
        }

        ans = countw * counth;
        if (ans >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}