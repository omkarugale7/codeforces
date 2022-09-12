/*Editor: Omkar Ugale
Time : .  21th April 2022 */
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
        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        map<char, int> firstt;
        map<char, int> secondd;
        for (int i = 97; i <= 107; i++)
        {
            firstt[char(i)] = 0;
            secondd[char(i)] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            firstt[arr[i][0]]++;
            secondd[arr[i][1]]++;
        }
        int ans = 0;
        for (auto it : firstt)
        {
            ans += ((it.second) * (it.second - 1)) / 2;
        }
        for (auto it : secondd)
        {
            ans += ((it.second) * (it.second - 1)) / 2;
        }
        // cout << "asn " << ans << endl;
        sort(arr, arr + n);
        int temp = 0;
        string t = arr[0];
        for (int i = 0; i < n; i++) // aa aa aa bb bb
        {
            // cout <<arr[i]<<" "<< temp << " ";
            if (arr[i] == t)
                temp++;
            else
            {
                if (temp == 1)
                {
                    temp = 1;
                t = arr[i];
                    continue;
                }
                ans -= (temp) * (temp - 1);
                temp = 1;
                t = arr[i];
            }
        }
        ans -= (temp) * (temp - 1);
        cout << ans << endl;
    }
    return 0;
}