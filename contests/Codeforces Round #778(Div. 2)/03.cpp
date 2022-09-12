/*Editor: Omkar Ugale
Time : .  24th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        bool ekonehai = false, conthai = false;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                ekonehai = true;
            if (arr[i] - arr[i - 1] == 1 && i > 0)
                conthai = true;
        }
        if (ekonehai && conthai)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}