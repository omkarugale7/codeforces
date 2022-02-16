#include <bits/stdc++.h>
using namespace std;

int findTwoNumbers(int sum, int gcd)
{

    if (__gcd(gcd, sum - gcd) == gcd && sum != gcd)
    {
        cout << gcd << " " << min(gcd, sum - gcd) << " " << sum - min(gcd, sum - gcd) << " "<<endl;
        return 1;
    }
    else
        return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i < n; i++)
        {
            if (findTwoNumbers(n-i,i))
                break;
            else
                continue;
        }
    }
    return 0;
}
