#include <iostream>

using namespace std;
int main()
{
    int num[50] = {0};
    for (int i = 2; i < 50; i++)
    {
        if (num[i] == 0)
        {
            for (int j = (i * i); j < 50; j += i)
            {
                num[j] = i;
            }
        }
    }

    int arr[50] = {0};
    int k = 0;
    for (int i = 2; i < 50; i++)
    {
        if (num[i] == 0)
        {
            arr[k++] = i;
        }
    }

    int n, m, i = 0;
    cin >> n >> m;
    for (i = 0; i < 20; i++)
    {
        if (arr[i] == n && arr[i + 1] == m)
        {
            cout << "YES" << endl;
            break;
        }
    }
    if (i > 18)
    {
        cout << "NO" << endl;
    }

    return 0;
}