/*Editor: Omkar Ugale
Time : .  13th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int t25s = 0, f50s = 0;
    bool issenahopayega = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 25)
            t25s++;
        if (arr[i] == 50)
        {
            if (t25s)
            {
                t25s--;
                f50s++;
            }
            else
            {
                issenahopayega = true;
                break;
            }
        }
        if (arr[i] == 100)
        {
            if (f50s && t25s)
            {
                f50s--, t25s--;
            }
            else if (t25s >= 3)
            {
                t25s -= 3;
            }
            else
            {
                issenahopayega = true;
                break;
            }
        }
    }
    if (!issenahopayega)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}