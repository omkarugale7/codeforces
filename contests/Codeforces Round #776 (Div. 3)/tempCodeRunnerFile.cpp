#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void reverse(int arr[], int s, int n)
{
    for (int i = s; i < n; i++)
        swap(arr[i], arr[n - i]);
}
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
        int l = n;
        vector<int> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            int k;
            for (int j = 0; j < l; j++)
            {
                if (arr[j] == i + 1)
                {
                    if (j == l - 1)
                        k = 0;
                    else
                        k = j + 1;
                    break;
                }
            }
            ans.push_back(k);
            reverse(arr, 0, k-1);
            reverse(arr, k, n);
            reverse(arr, 0, n);
            l--;
        }
        reverse(ans.begin(),ans.end());
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}