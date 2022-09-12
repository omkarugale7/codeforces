/* Editor: Omkar Ugale
DATE - 08-Jul-2022 TIME - 20:19:37*/
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
        int i = 1;
        cout << 2 << endl;
        set<int> s;
        vector<int>v(n+1,0);
        while(i<=n)
        {
            int j =i;
            while (j<=n)
            {
                if(!v[j])
                cout<<j<<" ";
                v[j]=1;
                j*=2;
            }
            i++;
            
        }
        cout<<endl;

        // while (i <= n)
        // {
        //     cout << i << " ";
        //     s.insert(i);
        //     i *= 2;
        // }
        // int j = 3;
        // while (j <= n)
        // {
        //     int k = j;
        //    while()
        //     if (count(s.begin(), s.end(), j) == 0)
        //     {
        //         cout << j << " ";
        //         s.insert(j);
        //     }
        //     if (count(s.begin(), s.end(), j * 2) == 0 && j * 2 <= n)
        //     {
        //         cout << j * 2 << " ";
        //         s.insert(j*2);
        //     }
        //     j++;
        // }
        
        // cout << endl;
    }
    return 0;
}