/* Editor: Omkar Ugale
DATE - 19-Jun-2022 TIME - 15:30:53*/
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
        int k = (n + 1) / 2 - 1;
        cout << arr[k] << endl;
        int left = 0, leftdigit;
        for (int i = 0; i < (n + 1) / 2; i++)
        {
            if (left < abs(arr[k] - arr[i]))
            {
                left = max(left, abs(arr[k] - arr[i]));
                leftdigit = arr[i];
            }
        }
        int leftist = 0;
        cout << leftdigit << " left" << endl;
        for (int i = 0; i < (n + 1) / 2; i++)
        {
            cout << abs(leftdigit - arr[i]) << endl;
            leftist += abs(leftdigit - arr[i]);
        }

        int right = 0,rightdigit;
        for (int i = (n + 1) / 2 - 1; i < n; i++)
        {
             if (right< abs(arr[k] - arr[i]))
            {
                right = max(right, abs(arr[k] - arr[i]));
                rightdigit = arr[i];
            } 
        }
        int rightist = 0;
        for (int i = 0; i < (n + 1) / 2; i++)
        {
            rightist += abs(rightdigit - arr[i]);
        }
        cout << leftist << " " << rightist << endl;
        cout << leftist + rightist + left + right - arr[k] << endl;
    }
    return 0;
}