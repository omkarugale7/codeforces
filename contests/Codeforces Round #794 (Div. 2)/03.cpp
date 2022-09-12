/* Editor: Omkar Ugale
DATE - 25-May-2022 TIME - 23:34:37*/
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
        map<int, int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s[arr[i]]++;
        }
        int cnt = 0;
        for (auto it : s)
        {
            if (it.second > 1)
                cnt += it.second;
        }
        if (cnt > (n / 2))
        {
            // cout<<cnt<<" "<<n<<endl;
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            sort(arr, arr + n);
            if (n % 2)
            {
            cout << "NO" << endl;
                int k = n - 2;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << arr[k - i] << " " << arr[i] << " ";
                }
                cout << arr[k + 1] << endl;
            }
            else
            {
                int k = n - 1;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << arr[k - i] << " " << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}