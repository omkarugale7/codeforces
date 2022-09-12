/* Editor: Omkar Ugale
DATE - 23-May-2022 TIME - 19:52:50*/
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
        int m;
        cin >> m;
        int brr[m];
        for (int i = 0; i < m; i++)
            cin >> brr[i];
        sort(arr, arr + n);
        sort(brr, brr + m);
        // cout<<arr[n-1]<<" "<<brr[m-1]<<endl;
        if (arr[n - 1] > brr[m - 1])
        {
            cout << "Alice" << endl;
            cout << "Alice" << endl;
        }
        else if(arr[n - 1] < brr[m - 1])
        {
            cout << "Bob" << endl;
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
            cout << "Bob" << endl;
        }
    }
    return 0;
}