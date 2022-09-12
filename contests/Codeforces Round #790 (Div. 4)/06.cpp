/* Editor: Omkar Ugale
Time : . 10th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        map<int, int> ma;
        for (int i = 0; i < n; i++)
        {
            ma[arr[i]]++;
        }
        int s, j, diff = 0, i, fins, finend;
        for (i = 0; i < ma.size(); i++)
        {
            if (ma[arr[i]] >= m)
            {
                s = arr[i];
                break;
            }
        }
        for (i; i < ma.size(); i++)
        {
            if (ma[arr[i]] >= m)
                j = arr[i];
            else
            {
                fins = s, finend = j;
                s = arr[i];
                diff = max(s - j - 1, diff);
            }
        }
        cout << diff << endl;
    }
    return 0;
}