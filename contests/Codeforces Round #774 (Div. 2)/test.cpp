#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

    ll n;
    cin >> n;
    vector<int> arr;
    ll b = 1;
    while (b <= n)
    {
        cout << b << " b" << endl;
        arr.push_back(b);
        b *= (ll)2;
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    int ans = 0;
return 0;
}