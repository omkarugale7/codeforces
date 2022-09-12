/* Editor: Omkar Ugale
DATE - 25-Jun-2022 TIME - 09:28:30*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

    int n = 5;
    // cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i], sum += arr[i];
    // cout << sum % 5 << endl;
    if (sum % 5 == 0 && sum!=0)
        cout << sum / 5 << endl;
    else
        cout << "-1" << endl;

    return 0;
}