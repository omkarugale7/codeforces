#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        string s = to_string(n);
        int l = s.length();
        int a1 = int(s[l - 1]);
        int a2 = int(s[l - 2]);
        if (a1 > a2)
        {
            s.erase(l - 1, 1);
        }
        else
        {
            s.erase(l - 2, 1);
        }
        if (stoi(s) == (-0))
        {
            cout << 0;
        }
        else
            cout << s << endl;
    }
    else
    {
        cout << n << endl;
    }
    return 0;
}
