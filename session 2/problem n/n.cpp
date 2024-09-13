#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
long long n;
   cin>>n;
   long long target;
   cin>>target;
   vector<long long >v(n);
   map< long long ,int >m ;
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
       if( m.find(target-v[i]) != m.end() )
       {
        cout<<m[target-v[i]]+1<<" "<<i+1<<"\n";
        return 0;
       }
       else 
       {
        m[v[i]]=i;
       }
   }

   cout<<"IMPOSSIBLE";
   



}