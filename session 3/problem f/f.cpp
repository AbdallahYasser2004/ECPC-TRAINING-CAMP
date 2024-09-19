#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  long long n,q;
  cin>>n>>q;
  vector<long long > v(n);
  for(long long i=0;i<n;i++) cin>>v[i];

  for (long long i=1;i<n;i++) v[i]+=v[i-1];

  while(q--)
  {
    long long l,r;
    cin>>l>>r;
    r--;
    l--;
     long long res=v[r];
     if(l>0) res=res-v[l-1];
     cout<<res<<'\n';
 
  }
  
}