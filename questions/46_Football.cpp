   /*Editor: Omkar Ugale
   Time : . 15th feb 2022 */
   #include <bits/stdc++.h>

   using namespace std;
   typedef long long int ll;
   int main()
   {
      int t;
      cin >> t;
      map<string, int> m;
      for (int i = 0; i < t; i++)
      {
         string ss;
         cin >> ss;
         m[ss]++;
      }
      int ans = 0;
      string o;
      for (auto it : m)
      {
         ans = max(ans, it.second);
         if (ans == it.second)
            o = it.first;
      }
      cout<<o<<endl;

      return 0;
   }