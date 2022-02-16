#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 1, z = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<pair<int, int>> zero;
        vector<pair<int, int>> one;
        string bin;
        cin >> bin;
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            if (bin[i] == '0')
            {
                zero.push_back(make_pair(arr[i], i));
            }

            else
                one.push_back(make_pair(arr[i], i));
        }
        sort(zero.begin(), zero.end());
        sort(one.begin(), one.end());

        for (int i = 0; i < zero.size(); i++)
        {
            arr[zero[i].second] = i + 1;
        }
        for (int i = 0; i < one.size(); i++)
        {
            arr[one[i].second] = i + zero.size() + 1;
        }
        for (int i = 0; i < n; i++)
        {
           cout<< arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}