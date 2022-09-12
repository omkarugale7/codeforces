/* Editor: Omkar Ugale
DATE - 30-Aug-2022 TIME - 19:58:08*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<char, int> m;
        m['T']++; 
        m['i']++;
        m['m']++;
        m['u']++;
        m['r']++;
        string s;
        cin >> s;
        bool haikya = true;
        for (int i = 0; i < n; i++)
        {
            if (!m[s[i]])
                haikya = false;
            else
                m[s[i]]--;
        }
        for(auto it:m)
        if(it.second)
        haikya=false;
        if(haikya)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}