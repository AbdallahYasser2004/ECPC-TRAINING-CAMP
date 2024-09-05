#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    long long m;
    cin >> m;
    long long maxsize=0;
      vector<vector<long long >> v(m);
      long long freq [n+1]={};
    for(int i = 0; i < m; i++)
    {
        long long k ;
        cin >> k;
        if(k>maxsize)
        {
            maxsize = k;
        }
        v[i].resize(k);
        for(int j = 0; j < k; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<stack<long long >> v1(m);
    {
        for(int i = 0; i < m; i++)
        {
            stack<long long> s;
            for(int j = v[i].size()-1; j >=0 ; j--)
            {
                s.push(v[i][j]);
            }
            v1[i] = s;
        }
    }

long long lastpoped=-1;
long long counter =0;long long j=0;
  
  
    while (counter<n)
    {int flag = 0;
       int ne =0; 
        long long mark=0;
      for(int i = 0; i < m; i++)
      {    
      if(!v1[i].empty())
{    
     mark =1;
    if(v1[i].top()==lastpoped)
    {
        v1[i].pop();
    }
    if(!v1[i].empty() && freq[v1[i].top()]==0 ) 
    freq[v1[i].top()]=i+1;
    
    else if(!v1[i].empty()&&freq[v1[i].top()]!=(i+1))
 {
     flag = 1;
  
   lastpoped=v1[i].top();
     v1[i].pop();
     counter++;
     
 }
       //if(v1[i].empty())
        //flag=1;

 

}
if(mark==0)
{
       {
        cout<<"Yes";
        return 0;
      }
}
      }

      if(flag ==0)
      {
        cout<<"No";
        return 0;
      }

 }
      
cout<<"Yes";

   
}









