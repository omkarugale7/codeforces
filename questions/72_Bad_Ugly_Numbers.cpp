    #include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    #define mod 1000000007

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            if (n == 1)
                cout << "-1" << endl;
            else
            {
                cout << "2";
                n--;
                while (n--)
                    cout << "3";
                cout << endl;
            }
        }
        return 0;
    }