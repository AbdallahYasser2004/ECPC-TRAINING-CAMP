#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> v(10e5+1);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
long long n,q;
    cin >> n >> q;
    for(int i=0; i<n; i++)
    {
      long long x;
      cin >> x;
      if(v[x] == 0)
      v[x]++;
    }
    for(int i=1; i<v.size(); i++)
    v[i] += v[i-1];
    while(q--)
    {
        long long l;
        cin >> l ;
        cout << v[l-1] <<" "<< v[v.size()-1]-v[l] << "\n";
    }


    
   
}