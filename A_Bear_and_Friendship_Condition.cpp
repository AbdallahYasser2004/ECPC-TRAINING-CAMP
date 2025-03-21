#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

long long x;
cin>>x;
string s="";
 while (x)
   {
    if (x%2==0)
    {
        s+='B';
    }
    else
    {
        if(x!=1)
        s+="AB";
        else
        s+="A";
    }
    x/=2;
   }

reverse(s.begin(),s.end());
cout<<s;
}