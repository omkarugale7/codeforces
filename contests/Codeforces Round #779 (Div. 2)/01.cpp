/*Editor: Omkar Ugale
Time : .  26th March 2022 */
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
        cin >> s;
        int zeroes = 0, ones = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                cnt += 2; 
                // cout<<"i "<<i<<" "<<cnt<<endl;
            }
          else  if (s[i] == '0' && s[i + 1] == '1' && s[i+2]=='0' && i+2<n)
            {
                cnt += 1;
                i++;
                // cout<<"ii "<<i<<" "<<cnt<<endl;
            }
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}