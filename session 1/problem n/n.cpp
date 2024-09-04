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
   for(int i=0; i<n; i++)
   {
     cin>>v[i];
   }
   while (q--)
   {
    string s;
    cin>>s;

    if(s=="pop_back")
       v.pop_back();
   
    else if(s=="push_back")
    {
     long long x;
     cin>>x;
     v.push_back(x);
    }

    else if (s=="front")
    cout<<v[0]<<endl;

    else if(s=="back")
    cout<<v[v.size()-1]<<endl;

    else if(s=="sort")
    {
       long long l,r;
       cin>>l>>r;
       sort(v.begin()+l-1,v.begin()+r);
    
   }

   else if(s== "reverse")
   {
     long long l,r;
     cin>>l>>r;
     reverse(v.begin()+l-1,v.begin()+r);
   }
   else if (s=="print")
   {
    long long x;
    cin>>x;
    cout<<v[x-1]<<endl;
   }

}


}