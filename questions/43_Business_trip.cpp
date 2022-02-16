/*Editor: Omkar Ugale
Time : . 14th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   int n;
   cin >> n;
   int arr[12];
   for (int i = 0; i < 12; i++)
      cin >> arr[i];
   sort(arr, arr + 12);
   int ans = 0, cnt = 0;
   bool gotit = false;
   for (int i = 11; i >= 0; i--)
   {
      if (cnt >= n)
      {
         gotit = true;
         break;
      }
      cnt += arr[i];
      ans++;
   }
      if (cnt >= n) 
         gotit = true;  
   if (gotit)
  cout<<ans<<endl;
  else
  cout<<"-1"<<endl;
   return 0;
}