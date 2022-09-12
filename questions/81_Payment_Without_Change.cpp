#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a , b,  n , s;
        cin>>a>>b>>n>>s;
        if(a*n+b>=s){
            if(b>=s%n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;

    }
    return 0;
}