/* Editor: Omkar Ugale
DATE - 28-Jun-2022 TIME - 20:30:53*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        vector<ll> brr;
        bool zeromilakya = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0 && !zeromilakya)
            {
                zeromilakya = true;
                brr.push_back(arr[i]);
            }
            else if (arr[i])
                brr.push_back(arr[i]);
        }
        map<ll, ll> m;
        for (int i = 0; i < brr.size(); i++)
            m[brr[i]]++;
        if (brr.size() > 4)
            cout << "NO" << endl;
        else if (brr.size() == 4)
        {
            if ((m.find(brr[0] + brr[1] + brr[2]) == m.end()) || (m.find(brr[3] + brr[1] + brr[2]) == m.end()) || (m.find(brr[3] + brr[0] + brr[2]) == m.end()) || (m.find(brr[0] + brr[1] + brr[3]) == m.end()))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if (brr.size() == 3)
        {
            if (m.find(brr[0] + brr[1] + brr[2]) != m.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (brr.size() == 2)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            if (m.find(sum) != m.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (brr.size() == 1)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            if (m.find(sum) != m.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (brr.size() == 1 && brr[0] == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}