/*Editor: Omkar Ugale
Time : .  21th April 2022 */
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
        bool oddpeevenhaikya = false, evenpeoddhaikya = false;
        vector<int> oddind;
        vector<int> evenind;
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                oddind.push_back(arr[i] % 2);
            else
                evenind.push_back(arr[i] % 2);
        }
        for (int i = 0; i < oddind.size(); i++)
        {
            // cout << oddind[i] << " ";
            if (oddind[0] != oddind[i])
                oddpeevenhaikya = true;
        }
        // cout << endl;
        for (int i = 0; i < evenind.size(); i++)
        {
            // cout << evenind[i] << " ";
            if (evenind[0] != evenind[i])
                evenpeoddhaikya = true;
        }
        // cout << evenpeoddhaikya << " " << oddpeevenhaikya << endl;
        if (evenpeoddhaikya || oddpeevenhaikya)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}