/* Editor: Omkar Ugale
DATE - 08-Jul-2022 TIME - 11:40:28*/
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
        // sort(arr, arr + n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                cnt++;
            else
                break;
        }
        if(cnt==n)
        {
            if(n%2)
            cout<<"First"<<endl;
            else
            cout<<"Second"<<endl;
        }
        else if(cnt%2)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;

        
    }
    return 0;
}