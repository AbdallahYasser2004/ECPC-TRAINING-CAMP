#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  
string v;
  cin>>v;
  long long q;
  cin>>q;
  deque<int>dq;
    for(long long i=0;i<v.size()-1;i++)
  { if(v[i]==v[i+1])
 dq.push_back(1);
  else
  dq.push_back(0);
  }
dq.push_front(0);

  for (long long i=1;i<v.size();i++) dq[i]+=dq[i-1];
 //cout<<v[v.size()-1];

  while(q--)
  {
    long long l,r;
    cin>>l>>r;
    r--;
    l--;
     long long res=dq[r];
     if(l>0) res=res-dq[l];
     cout<<res<<'\n';
 
  }
  
}