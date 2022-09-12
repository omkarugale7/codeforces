/*Editor: Omkar Ugale
Time : .  21th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int left = 0, right = n - 1;
        int leftwali = 0, rightwala = 0;
        int ans = 0;
        while (left < right)
        {
            // cout << left << " " << leftwali << " " << right << " " << rightwala << endl;
            if (leftwali == rightwala)
            {
                // if ((leftwali > 0) && (rightwala > 0 ))
                    ans = left + 1 + (n - right);
                leftwali += arr[left];
                rightwala += arr[right];
                // cout << "l" << endl;
                left++, right--;
            }
            else if (leftwali > rightwala)
            {
                // cout << "k" << endl;
                rightwala += arr[right];
                right--;
            }
            else
            {
                // cout << "j" << endl;
                leftwali += arr[left];
                left++;
            }
        }
        // cout << left << " jjj " << leftwali << " " << right << " " << rightwala << endl;
        // if (leftwali != rightwala)
        // {
        //     rightwala -= arr[right];
        //     leftwali -= arr[left];
        //     left--, right++;
        // }
        cout << ans << endl;
    }
    return 0;
}