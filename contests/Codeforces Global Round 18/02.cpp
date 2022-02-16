#include <bits/stdc++.h>

using namespace std;

long long int bits[200001][20];

int main()
{
    for (int i = 1; i <= 200000; i++)
    {
        long long int temp = i, a = 0;
        while (temp > 0)
        {
            bits[i][a++] += (temp % 2);
            temp /= 2;
        }
        for (int j = 0; j < 20; j++)
        {
            bits[i][j] += bits[i - 1][j];
        }
    }

    int t;
    cin >> t;
    while (t--)
    {

        long long int l, r;
        cin >> l >> r;
        long long int max_num = 0;

        for (int i = 0; i < 20; i++)
        {
            max_num = max(max_num, bits[r][i] - bits[l - 1][i]);
        }

        cout << (r - l + 1 - max_num) << endl;
    }

    return 0;
}