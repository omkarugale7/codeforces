#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, b;
        cin >> l >> b;
        int max_no = 0;
        for (int i = 1; i <= 2; i++)
        {
            int a;
            cin >> a;
            int arr[a];
            for (int j = 0; j < a; j++)
            {
                cin >> arr[j];
            }
            int k = (arr[a - 1] - arr[0]) * b;
            max_no = max(max_no, k);
        }
        for (int i = 1; i <= 2; i++)
        {
            int a;
            cin >> a;
            int arr[a];
            for (int j = 0; j < a; j++)
            {
                cin >> arr[j];
            }
            int k = (arr[a - 1] - arr[0]) * l;
            max_no = max(max_no, k);
        }
        cout << max_no << endl;
    }

    return 0;
}