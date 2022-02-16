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
        string s;
        cin >> s;
        int arr[26] = {0};
        sort(s.begin(), s.end());
        cout << s << endl;
        // for (int i = 0; i < s.size(); i++)
        // {
        //     arr[s[i] - 'a']++;
        // }
        // for (int i = 0; i < 26; i += 2)
        // {
        //     if (arr[i])
        //     {
        //         cout << char('a' + i);
        //         arr[i]--;
        //     }
        //     if (arr[i + 1])
        //     {
        //         cout << char('a' + i + 1);
        //         arr[i + 1]--;
        //     }
        //     if (arr[i])
        //     {
        //         cout << char('a' + i);
        //         arr[i]--;
        //     }
        //     if (arr[i + 1])
        //     {
        //         cout << char('a' + i + 1);
        //         arr[i + 1]--;
        //     }
        // }
        // cout << endl;
    }
    return 0;
}