    /*Editor: Omkar Ugale
    Time : .  29th March 2022 */
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
            sort(arr, arr + n);
            if (n == 1)
            {
                if (arr[0] == 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
                continue;
            }
            int k = 0;
            bool mila = false;
            
            if (arr[n-1]-arr[n-2]<=1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        return 0;
    }