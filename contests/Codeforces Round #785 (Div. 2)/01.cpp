/*Editor: Omkar Ugale
Time : .  30th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum += s[i] - 'a' + 1;
            // cout << s[i] - 'a' + 1 << " ";
        }
        if (s.size() % 2)
            sum -= (2 * min(s[0] - 'a'+1, s[s.size() - 1] - 'a'+1));
        if (s.size() == 1)
            cout << "Bob " << s[0] - 'a'+1 << endl;
        else
            cout << "Alice " << sum << endl;
    }
    return 0;
}