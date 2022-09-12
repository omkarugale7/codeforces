/* Editor: Omkar Ugale
DATE - 14-Jun-2022 TIME - 21:01:44*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int chalna(vector<int> &meraarray, int x)
{
    int n = meraarray.size();

        int j = 0, ummmmm = 0;
    int gu = x;
    for (auto itt : meraarray)
    {
        ummmmm += itt;
    }
    int fkk = INT_MAX;
    int sum = 0;
    int i = 0;
    while (j < n)
    {
        sum += meraarray[j];
        while (i <= j && sum > gu)
        {
            sum -= meraarray[i];
            i++;
        }
        if (sum == gu)
        {
            fkk = min(fkk, n - (j - i + 1));
        }
        j++;
    }
    if (fkk == INT_MAX)
        return -1;
    return fkk;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout <<  chalna(arr, s) << endl;
    }
    return 0;
}