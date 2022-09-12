/*Editor: Omkar Ugale
Time : .  20th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> arr;
        int arrr[n];
        for (int i = 0; i < n; i++)
        {
            int f;
            cin >> f;
            arr[f]++;
            arrr[i]=f;
        }
        bool ansmila = false;
        for (int i = 0; i < n; i++)
        {
            if (arr.find((k + arrr[i])) != arr.end())
            {
                ansmila = true;
                break;
            }
        }
        if (ansmila)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}