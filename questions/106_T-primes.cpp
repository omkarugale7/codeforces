/* Editor: Omkar Ugale
DATE - 13-Sep-2022 TIME - 23:55:43*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int N = 1e6 + 1;
bool prime[N + 1];

void SieveOfEratosthenes()
{ 
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= N; p++)
    { 
        if (prime[p] == true)
        { 
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
    // Print all prime numbers
    // for (int p = 2; p <= n; p++)
    //     if (prime[p])
    //         cout << p << " ";
}

void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int32_t main()
{
    SieveOfEratosthenes();
    fastio;
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    // map<int, int> m;
    // set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout << sqrt(arr[i]) << " " << isPrime(sqrt(arr[i])) << endl;
        int k = sqrt(arr[i]);
        if (k * k == arr[i] && prime[k] && arr[i] > 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    // sort(arr.begin(), arr.end());
    // PrintArr(arr);
    return 0;
}