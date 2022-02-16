// C++ implementation of above approach
#include <iostream>
#include <math.h> // For sqrt() and cbrt()
using namespace std;
 
int countSC(int N)
{
	int res = (int)sqrt(N) + (int)cbrt(N)
			- (int)(sqrt(cbrt(N)));

	return res;
}
 
 

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << countSC(n) << endl;
    }

    return 0;
}
