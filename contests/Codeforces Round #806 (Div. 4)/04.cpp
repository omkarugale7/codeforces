/* Editor: Omkar Ugale
DATE - 12-Jul-2022 TIME - 20:20:25*/
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
        string arr[n];
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            arr[i] = temp;
            m[temp]++;
        }
        int ans[n] = {0};
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < arr[i].size(); j++)
            {
                string s1 = arr[i].substr(0, j);
                string s2 = arr[i].substr(j, arr[i].length() - j);
                if (m[s1]!=0 && m[s2]!=0)
                {
                    // cout << s1 << " " << s2<<" "<<s1+s2<<" "<<m[s1+s2] << endl;
                    ans[i] = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] ;
        cout << endl;
    }
    return 0;
}