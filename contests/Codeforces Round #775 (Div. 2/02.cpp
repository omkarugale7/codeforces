#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n], sum = 0;
        bool sabzerohai = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i])
           sabzerohai = false;
        }
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
            sum += arr[i];
        // cout<<sum<<" "<<arr[n-1]<<endl;
        if (sabzerohai)
       cout<<0<<endl;
       else if (sum >= arr[n - 1])
            cout << 1 << endl;
        else
            cout << arr[n - 1] - sum << endl;
    }
    return 0;
}