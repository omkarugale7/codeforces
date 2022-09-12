/*Editor: Omkar Ugale
Time : . 14th march 2022 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i==0&&j==0)
                 cout<<"W";
                 else
                 cout<<"B";                
            }
            cout<<endl;
        }
    }
    return 0;
}