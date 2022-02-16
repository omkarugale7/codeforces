#include <iostream>

using namespace std;
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int length, width;
    if (n % a == 0)
    {
        length = n / a;
    }
    else
    {
        length = (n / a) + 1;
    }

    if (m % a == 0)
    {
        width = m / a;
    }
    else
    {
        width = (m / a) + 1;
    }
    cout << length * width << endl;
    return 0;
}