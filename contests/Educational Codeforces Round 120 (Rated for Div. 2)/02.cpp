#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 1, z = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        string bin;
        cin >> bin;
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            if (bin[i] == '0')
                z++;

            brr[arr[i] - 1] = bin[i] - '0';
        }
        for (int i = 0; i < n; i++)
        {
            if (brr[i] == 0)
            {
                brr[i] = k;
                k++;
            }
            else
            {
                brr[i] = z;
                z++;
            }
        }
        for (int i = 0; i < n; i++)
            cout << brr[i];
    }
    return 0;
}