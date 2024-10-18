#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  int n;
  cin>>n;
 
  vector<long long >v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end()); 
    int q;
  cin>>q;
    for(int i=0;i<q;i++)
    {
        long long x;
        cin>>x;
        auto lb=upper_bound(v.begin(),v.end(),x);
        long long index=lb-v.begin();
        if(index>=0)
        cout<<index<<endl;
        else
        cout<<0<<endl;
     
    }
}