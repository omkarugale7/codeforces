/*Editor: Omkar Ugale
Time : .  15th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int maxno = 0;
        string ans = "";
        bool kdonaheka = false;
        for (int i = 0; i < n.size() - 1; i++)
        {
            int k = (n[i] - '0') + (n[i + 1] - '0');
            string kk = to_string(k);
            // cout << k << "k" << endl;
            maxno = max(maxno, k);
            if (kk.size() ==1)
                kdonaheka = true;
            if (maxno == k)
            {
                ans = "";
                string first = n.substr(0, i);
                string last = n.substr(i + 2, n.size() - 2-i);
                ans += first;
                ans += to_string(k);
                ans += last;
                // cout << i << " " << first << " " << k << " " << last << " " << ans << endl;
            }
        }
        if (kdonaheka)
        {
           cout<<(n[0] - '0') + (n[1] - '0')<<n.substr(2, n.size() - 2)<<endl;
        }
        else
        cout << ans << endl;
    }
    return 0;
}