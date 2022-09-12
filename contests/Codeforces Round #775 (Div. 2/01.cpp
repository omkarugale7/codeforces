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
        int counts = 0, counte = 0, ans = 0, i = 0, j = n - 1;
        while (i < j)
        {
            if (!arr[i])
            {
                i--;
                break; 
            } 
            i++;
        } 
        while (j > i)
        {
            if (!arr[j])
            {
                j++;
                break;  
            }
            j--;
        } 
        // cout << i << " " << j << endl;
        cout << j - i << endl;
    }
    return 0;
}