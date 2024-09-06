#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   long long m,n;
   cin >> n >> m;
   vector<long long >v(n);
   for(int i=0;i<n;i++) cin >> v[i];
   sort(v.begin(),v.end());
   
   while (m--)
   {
    long long x;
    cin >> x;
    auto it = upper_bound(v.begin(), v.end(), x);
    cout<<it-v.begin()<<" ";
   }

}