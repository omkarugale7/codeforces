/* Editor: Omkar Ugale
DATE - 25-May-2022 TIME - 23:10:15*/
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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        bool hosaktahaikya = false;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==(sum-arr[i])*1.0/(n-1))
            {
                // cout<<arr[i]<<endl;
                hosaktahaikya = true;
                break;
            }
        }
        if(hosaktahaikya)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}