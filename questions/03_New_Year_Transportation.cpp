#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int n, a;
    cin >> n >> a;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    int k = 0;
    while (k < a - 1)
    {
        k += arr[k];
    }
    if (k == a - 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}