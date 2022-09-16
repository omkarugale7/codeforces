/* Editor: Omkar Ugale
DATE - 15-Sep-2022 TIME - 22:47:12*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int a(int r)
{
    return ((r) * (r - 1)) / 2;
}
int32_t main()
{
    fastio; 
        int n, m;
        cin >> n >> m;
        int max, min;
        max = (n - m + 1);
        min = (n / (m));
        int rem = n % m;
        int k = rem * a(min+1);
        int j = (m - rem) * a(min); 
        cout << k + j << " " << a(max) << endl; 
    return 0;
}