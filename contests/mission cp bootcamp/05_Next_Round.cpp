#include <iostream>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int num[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] != 0 && num[i] >= num[k-1])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}