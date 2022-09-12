/* Editor: Omkar Ugale
DATE - 14-Jun-2022 TIME - 21:21:05*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool hameshaYesDeRahaHai()
{
    int n;
    cin >> n;
    int arr[n];
    int dasSizeKaArr[10] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dasSizeKaArr[arr[i] % 10]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (dasSizeKaArr[i] == 0)
            continue;
        dasSizeKaArr[i]--;
        for (int j = 0; j < 10; j++)
        {
            if (dasSizeKaArr[j] == 0)
                continue;
            dasSizeKaArr[j]--;
            for (int k = 0; k < 10; k++)
            {
                if (dasSizeKaArr[k] == 0)
                    continue;
                dasSizeKaArr[k]--;
                if ((i + j + k) % 10 == 3)
                {
                    return true;
                }
                dasSizeKaArr[k]++;
            }
            dasSizeKaArr[j]++;
        }
        dasSizeKaArr[i]++;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool k = hameshaYesDeRahaHai();
        if (k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}