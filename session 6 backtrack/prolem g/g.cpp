#include <iostream>
#include <bits/stdc++.h>



using namespace std;


string s;

vector<string> l;
void foo( int i,string k="")
{
   if(i==s.size())
    {//cout<<k<<endl;
    if(k.size())
     l.push_back(k);
     return ;}


    
    foo(i+1,k+s[i]);
   
    
    foo(i+1,k);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s;
    foo(0);
sort(l.begin(), l.end());

for(int i =0;i<l.size();i++)
 cout<<l[i]<<endl;
 // cout<<l.size();
 // cout<<l[0]<<endl;
 // cout<<l[l.size()-1]<<endl;
 // cout<<l[l.size()/2]<<endl;

    return 0;
}