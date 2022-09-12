/* Editor: Omkar Ugale
DATE - 12-Jul-2022 TIME - 20:14:51*/
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int j = 0; j < n; j++)
        {
            int k;
            cin >> k;
            string kk;
            cin >> kk;
            for (int i = 0; i < k; i++)
            {
                if (kk[i] == 'U')
                {
                    arr[j]--;
                }
                else if (kk[i] == 'D')
                    arr[j]++;
                if (arr[j] > 9)
                    arr[j] = 0;
                if (arr[j] < 0)
                    arr[j] = 9;
            }
        }
        for (int i = 0; i < n; i++)
       cout<<arr[i]<<" ";
       cout<<endl;
        
    }
    return 0;
}