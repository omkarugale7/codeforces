/*Editor: Omkar Ugale
Time : .  23th April 2022 */
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
        priority_queue<int> q;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            q.push(k);
        }
        int cnt = 0;
        while (q.top() > 1)
        {
            int t = q.top();
            if (t % 2)
            {
                q.push(t / 2);
                q.push(t / 2 + 1);
            }
            else
            {
                q.push(t / 2);
                q.push(t / 2);
            }
            q.pop();
            cnt++;
        }
        if(cnt%2)
        cout<<"errorgorn"<<endl;
        else
        cout<<"maomao90"<<endl;

    }
    return 0;
}