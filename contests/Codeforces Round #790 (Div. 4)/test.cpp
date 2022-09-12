/* Editor: Omkar Ugale
Time : . 10th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       string s;
       cin>>s;
       int fir = 0 , lst = 0;
       for (int i = 0; i < 6; i++)
       {
           if(i<3)
           fir+=s[i]-'0';
           else
           lst+=s[i]-'0';
       }
       
        if (fir == lst)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}