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
        string s = "";
        int arr[n], start = 1, end = n - 2;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n == 1)
        {
            cout << arr[0];
            continue;
        }

        if (arr[0] != n && arr[n - 1] != n)
            cout << -1 << endl;
        else
        {
            s = to_string(arr[0]) + s + to_string(arr[n - 1]);
            while (start <= end)
            {
                if (arr[start] <= arr[end])
                {
                    s = to_string(arr[start]) + s;
                    start++;
                }
                else if (arr[start] > arr[end])
                {
                    s = s + to_string(arr[end]);
                    end--;
                }
                else
                {
                    start++;
                    end--;
                }
            }
            for (int i = 0; i < n; i++)
                cout << s[i] << " ";
            cout << endl;
        }
    }
    return 0;
}