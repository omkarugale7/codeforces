/* Editor: Omkar Ugale
Time : . 5th May 2022 */
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
        int lessthanzero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                lessthanzero++;
                arr[i] = 0 - arr[i];
            }
        }
        int cnt = 2;
        bool milgaya = false, galathai = false;
        for (int i = 1; i < n; i++)
        {
            if (milgaya && arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
                galathai = true;
            if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
            {
                // cout << arr[i - 1] << " " << arr[i] << " " << arr[i + 1] << endl;
                milgaya = true;
            }
            else if (!milgaya)
                cnt++;
        }
        // cout << lessthanzero << " " << cnt << endl;
        if (galathai)
            cout << "NO" << endl;
        else if (lessthanzero == 0 & !milgaya)
            cout << "YES" << endl;
        else if (cnt == lessthanzero && milgaya)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}