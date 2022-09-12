/* Editor: Omkar Ugale
DATE - 02-Jul-2022 TIME - 17:02:57*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ,m;
        cin >> n >> m;
        int a[n][m];
		set< int > r, c;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				if(a[i][j] == 1)
					r.insert(i), c.insert(j);
			}
		}
		int mn = min(n - r.size(), m - c.size());
		if(mn % 2)
			cout << "Ashish" << endl;
		else
			cout << "Vivek" << endl;
    }
    return 0;
}