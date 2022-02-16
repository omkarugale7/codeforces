#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    bool is_div = false;
    if (!(is_div))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] - '0') % 8 == 0)
            {
                cout << "YES" << endl;
                cout << s[i] << endl;
                is_div = true;
                break;
            }
        }
    }
    if (!(is_div))
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i+1; j < s.size(); j++)
            {
                int aa = (s[i] - '0') * 10 + (s[j] - '0');
                if (aa % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << aa << endl;
                    is_div = true;
                    break;
                }
            }
            if ((is_div))
                break;
        }
    }
    if (!(is_div) && s.size() > 2)
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i+1; j < s.size(); j++)
            {
                for (int k = j+1; k < s.size(); k++)
                {

                    int aa = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                    if (aa % 8 == 0)
                    {
                        cout << "YES" << endl;
                        cout << aa << endl;
                        is_div = true;
                        break;
                    }
                }
                if ((is_div))
                    break;
            }
            if ((is_div))
                break;
        }
    }

    return 0;
}