/* Editor: Omkar Ugale
DATE - 12-Jul-2022 TIME - 20:12:27*/
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
        string s;
        cin>>s;
        set<char>st;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(st.find(s[i])==st.end())
            {
                st.insert(s[i]);
                cnt+=2;
            }
            else
            cnt++;
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}