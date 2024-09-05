#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int n;
    cin >> n;
   vector<int >v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }
int j=1;
int q=n;
stack<int > s;
int i=0;
int flag=0;
while (1)
{ flag=0;
    if(!s.empty())
     {   if (v[i]==s.top())
           {
            s.pop();
           i++;
           flag=1;}
           
            }
            
            if(j<=n)
           { s.push(j);
           j++;
           flag=1;}
        
           
            if(i==n)
            break;
            if(flag==0)
            break;
     
     }
   


if(s.empty())
   cout<<"YES";
else
   cout<<"NO";
    return 0;

}