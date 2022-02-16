#include <iostream>

using namespace std;
int main()
{
    long long int k, n, w;
    cin >> k >> n >> w;
    long long int needed = ((w * (w + 1) / 2)) * k;
    if (needed < n)
    {
        cout << 0;
    }
    else
        cout << needed - n << endl;
    return 0;
}