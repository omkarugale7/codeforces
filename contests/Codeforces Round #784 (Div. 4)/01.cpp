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
         if(n>=1900)
         cout<<"Division 1"<<endl;
         else if(n<1900 && n>=1600)
         cout<<"Division 2"<<endl;
         else if(n<1600 && n>=1400)
         cout<<"Division 3"<<endl;
         else if(n<1400 )
         cout<<"Division 4"<<endl;
         
    }
    return 0;
}