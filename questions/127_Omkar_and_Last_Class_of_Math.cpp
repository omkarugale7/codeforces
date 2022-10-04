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
const int N = 1e5 + 1;
int arr[N] = {0};
vector<int> prime;
void sieve()
{
    for (int i = 2; i < N; i++)
    {
        for (int j = 2 * i; j < N; j += i)
            arr[j] = 1;
    }
    for (int i = 2; i < N; i++)
    {
        if (!arr[i])
            prime.push_back(i);
    }
}

void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    int j = 0;
    bool milakya = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        { 
            milakya = true;
            break;
        }
    }
    if(!milakya)
    cout<<"1"<<" "<<n-1<<endl;
    else if (n % 2 == 0)
        cout << n / 2 << " " << n / 2 << endl;
    else if (n % 3 == 0)
        cout << n / 3 << " " << n - (n / 3) << endl;
    else
    {
        int ans, i = 0;
        while (prime[i] < n)
        {
            if (n % prime[i] == 0)
            {
                ans = prime[i];
                break;
            }
            i++;
        }
        cout << n / ans << " " << n - (n / ans) << endl;
    }
}
int32_t main()
{
    sieve();
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}