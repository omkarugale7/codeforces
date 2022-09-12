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
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        vector<int> sumarr(n);
        sumarr[0] = arr[n - 1];
        for (int i = 1; i < n; i++)
        {
            sumarr[i] = sumarr[i - 1] + arr[n - i - 1];
          
        } 
        for (int i = 0; i < m; i++)
        {
            int k;
            cin >> k;
            if(lower_bound(sumarr.begin(), sumarr.end(), k) ==sumarr.end())
            cout <<"-1" << endl;
            else
            cout<<lower_bound(sumarr.begin(), sumarr.end(), k) -  sumarr.begin()+1 <<endl;
        }
    }
    return 0;
}