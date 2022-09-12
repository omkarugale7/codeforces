#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class ganduquestion
{
public:
    int index;
    int coordinate;
    int weight;
};
bool MyComparaterAscendingweight(ganduquestion a, ganduquestion b)
{
    return a.weight < b.weight;
}
bool MyComparaterAscendingcoordinate(ganduquestion a, ganduquestion b)
{
    return a.coordinate < b.coordinate;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        ganduquestion arr[n];
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            arr[i].index = i + 1;
            arr[i].coordinate = a;
            arr[i].weight = b;
        }
        sort(arr, arr + n, MyComparaterAscendingweight);
        int sum = 0;
        ganduquestion arr2[n];
        for (int i = 0; i < 2 * m; i++)
        {
            arr2[i] = arr[i];
            // cout<<"i - "<<i<<" weight - "<<arr[i].weight<<endl;
            sum += arr[i].weight;
        }
        cout << sum << endl;
        int limit = arr[2 * m - 1].weight;
        // cout << "limit - " << limit << endl;
        sort(arr2, arr2 + m * 2, MyComparaterAscendingcoordinate);
        int i = 0, j = 2*m - 1;
        while (i <= j)
        {
            cout << arr2[i].index << " " << arr2[j].index << endl;
            i++, j--;
        }
    }
    return 0;
}