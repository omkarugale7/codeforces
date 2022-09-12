/* Editor: Omkar Ugale
DATE - 14-Jun-2022 TIME - 20:19:04*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char chararr[8][8];
        for (int i = 0; i <= 7; i++)
        {
            for (int j = 0; j <= 7; j++)
                cin >> chararr[i][j];
        }
        bool milgaya = false;
        for (int i = 1; i <  7; i++)
        {
            for (int j = 1; j <  7; j++)
            {
                if ((chararr[i - 1][j - 1] == '#') && (chararr[i - 1][j + 1] == '#') && (chararr[i][j] == '#'))
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    milgaya = true;
                    break;
                }
            }
            if (milgaya)
                break;
        }
    }

    return 0;
}