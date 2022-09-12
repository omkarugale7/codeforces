/* Editor: Omkar Ugale
DATE - 08-Jul-2022 TIME - 19:16:08*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[2][2];
        int cnt = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j])
                cnt++;
            }
        }
        if(cnt==4)
        cout<<2<<endl;
        else if(cnt == 0)
        cout<<0<<endl;
        else if(cnt == 3)
        cout<<1<<endl;
        else
        cout<<1<<endl;
    }
    return 0;
}