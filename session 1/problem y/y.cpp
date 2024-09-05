#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
   sort(v.begin(), v.end());
   long long q;
   cin >> q;
   while(q--)
   {
    long long l;
    cin>>l;
   auto it= upper_bound(v.begin(), v.end(),l);
   auto it2= lower_bound(v.begin(),v.end(),l);
  
    cout<<it-v.begin()<<endl;

   }
  


}