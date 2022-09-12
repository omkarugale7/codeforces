/* Editor: Omkar Ugale
DATE - 31-May-2022 TIME - 20:05:07*/
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
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]%2)
            odd++;
            else
            even++;
        }
        cout<<min(odd,even)<<endl; 

    }
    return 0;
}