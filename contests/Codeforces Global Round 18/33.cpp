#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int same = 0, diff = 0;
        vector <int> a;
        vector <int> b;
        for (int i = 0; i < n; i++)
        {
           int k ;
           cin>>k;
           a.push_back(k);
        }
        for (int i = 0; i < n; i++)
        {
          cout<<a[i]<<endl;
        }
        for (int i = 0; i < n; i++)
        {
           int k ;
           cin>>k;
           b.push_back(k);
        }
        
        bool hai = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                hai = true;
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                same++;
            else
                diff++;
        }
        if (hai == false)
            cout << -1 << endl;
        else
            cout <<min(same,diff) << endl;
    }

    return 0;
}