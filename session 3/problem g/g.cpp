#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   long long n,q;
   cin >> n >> q;
   vector<long long >v(n);
   vector<long long>v2(n,0);
   for(int i=0; i<n; i++)
   {
     long long x;
     cin >> x;
     v[i] = x;}


     while(q--)
     {
        long long l,r;
        cin >> l >> r;
        long long h;
        cin >> h;
       l--;
       r--;
       v2[l]+=h;
       if(r+1<n)
       v2[r+1]-=h;

       
     }


     for(int i=1;i<n;i++)
     v2[i]+=v2[i-1];

     for(int i=0;i<n;i++)
    { v[i]+=v2[i];
    cout << v[i] << " ";
    }
   
    
  

   
}