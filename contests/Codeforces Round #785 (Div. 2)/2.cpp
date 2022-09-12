#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
#include <stack>
#include <map>
#include <cstdio>
#include <stdio.h>
#include <string>
#include <cstring>
#include <set>
#include <iomanip>

using namespace std;
using ll = long long;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        set<char> ch;
        string str;
        cin >> str;
        map<char, int> mp;
        bool vidp = true;
        for (int f = 0; f < str.size(); f++)
        {
            mp[str[f]] = 1;
        }
        int r = mp.size();
        for (int f = 0; f < r; f++)
        {
            ch.insert(str[f]);
        }
        if (ch.size() != r)
            vidp = false;
        int x = 0;
        for (int f = r; f < str.size(); f++)
        {
            ch.erase(str[x]);
            ch.insert(str[f]);
            x++;
            if (ch.size() != r)
            {
                vidp = false;
            }
        }
        if (vidp)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}