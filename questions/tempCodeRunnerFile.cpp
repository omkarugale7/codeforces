/* Editor: Omkar Ugale
DATE - 04-Oct-2022 TIME - 14:20:01*/
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2 << endl;
        else
        {
            int a = n / 2, b = n / 2 + 1;
            while(b%a)
            {
                b++,a--;
            }
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}