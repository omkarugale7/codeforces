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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        set<int> s;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            while (arr[i] > n)
            {
                arr[i] /= 2;
            }
            while (s.find(arr[i]) != s.end()&& arr[i] > 0)
            {
                arr[i] /= 2;
            }
            if (arr[i] == 0)
                flag = false;
            else
                s.insert(arr[i]);
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < i + 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}