#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, a, b, k = 0, z;
    cin >> n >> a >> b;
    int arr[n];
    int left = 1, right = n;
    if (a + b > n - 2 || abs(a - b) > 1)
        cout << "-1" << endl;
    else
    {
        if (a == b)
        {
            arr[k++] = left;
            left++;
            z = 0;
            while (z < a)
            {
                arr[k++] = right;
                right--;
                arr[k++] = left;
                left++;
                z++;
            }
            for (int i = left; i <= right; i++)
                arr[k++] = i;
        }
        else if (a > b)
        {
            arr[k++] = left;
            left++;
            z = 0;
            while (z < a)
            {
                arr[k++] = right;
                right--;
                arr[k++] = left;
                left++;
                z++;
            }
            for (int i = right; i <= left; i--)
                arr[k++] = i;
        }
        else
        {
            arr[k++] = right;
            right--;
            z = 0;
            while (z < a)
            {
                arr[k++] = left;
                left++;
                arr[k++] = right;
                right--;
                z++;
            }
            for (int i = left; i <= right; i--)
                arr[k++] = i;
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    return 0;
}