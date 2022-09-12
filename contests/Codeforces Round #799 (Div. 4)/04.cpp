/* Editor: Omkar Ugale
DATE - 14-Jun-2022 TIME - 20:31:00*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int timee(int time, int addon)
{
    int hrs = (time / 100) + (addon / 60);
    int minutes = (time % 100) + (addon % 60);
    hrs += minutes / 60;
    hrs %= 24;
    minutes %= 60;
    return (hrs * 100 + minutes);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string time;
        cin >> time;
        int addon;
        cin >> addon;
        set<int> s;
        bool nhimilakyasetmain = true;
        int initTime = (time[0] - '0') * 1000 + (time[1] - '0') * 100 + (time[3] - '0') * 10 + (time[4] - '0');
        s.insert(initTime);
        while (nhimilakyasetmain)
        {
            int temp = timee(initTime, addon);
            // cout << temp << " " << initTime << endl;
            if (s.find(temp) != s.end())
                break;
            initTime = temp;
            s.insert(temp);
        }
        int ans = 0;
        for (auto it : s)
        {

            // cout << it << endl;
            string tt = to_string(it);
            if (it < 1000)
                tt = '0' + tt;
            else if(it<100)
                tt = "00" + tt;
            else if(it<10)
                tt = "000" + tt; 
            if(it==0)
            ans++;

            if (tt[0] == tt[3] && tt[1] == tt[2])
            {
                ans++;
                // cout << "ttt" << tt << endl;
            }
        }
        cout << ans << endl;
    }
    return 0;
}