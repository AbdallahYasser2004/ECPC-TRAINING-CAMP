#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,m;
    cin >> n >> m;
    vector<long long> v(n);

for(int i=0; i<n; i++)
{
    cin >> v[i];
}
while(m--)
{
  long long y,x,l;
  cin >> y >> x >> l;
  y--;
  x--;
  v[y]-=l;
  v[x]+=l;

}

for(int i=0;i<n;i++)
{
    if(v[i]<0)
    {cout<<"NO";
    return 0;}
}

cout<<"YES"<<endl;

}