/* Editor: Omkar Ugale
DATE - 03-Oct-2022 TIME - 21:39:38*/
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
int32_t main()
{
    fastio;
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    cout<<a<<" "<<b<<endl;
    if (a < b)
        cout << "-1" << endl;
    else if (a > b)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}