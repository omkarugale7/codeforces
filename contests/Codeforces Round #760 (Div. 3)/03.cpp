#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int final = 0;
        bool ans = true;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        bool is_div = true;
        for (int j = 0; j < n; j++)
        {
            int i = 0;
            if (arr[1] % arr[j] == 0)
            {
                is_div = true;
            }

            else
            {
                is_div = false;
            }
            for (i = 0; i < n; i++)
            {
                // cout << arr[i] << " " << arr[j] << " " << is_div << " " << ans << endl;
                if ((arr[i] % arr[j] == 0) && (is_div == false))
                {
                    is_div = true;
                    ans = true;
                }
                else if ((arr[i] % arr[j] != 0) && (is_div == true))
                {
                    is_div = false;
                    ans = true;
                }
                else
                {
                    ans = false;
                    break;
                }
            }
            if (ans == true && i == n)
            {
                // cout << "k" << endl;
                final = arr[j];
                break;
            }
        }
        cout << final << endl;
    }

    return 0;
}