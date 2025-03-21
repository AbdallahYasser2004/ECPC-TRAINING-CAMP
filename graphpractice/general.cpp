#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   
    long long t;
    cin>>t;
    while(t--)
    {
      long long n;
      cin>>n;
      vector<long long> v1(n);
      vector<long long> v2(n);
      vector<long long> v3(n);
      for(int i=0;i<n;i++)
      cin>>v1[i];
      for(int i=0;i<n;i++)
      cin>>v2[i];
      for(int i=0;i<n;i++)
      cin>>v3[i];

      sort(v1.rbegin(),v1.rend());
      sort(v2.rbegin(),v2.rend());
      sort(v3.rbegin(),v3.rend());

      long long max0=max(v3[0],max(v1[0],v2[0]));
      long long max1;
      long long max2;
      if (max0==v3[0])
      {
        if(v1[1]>=v2[1])
        {
          max0+=v1[1]+v2[2];
        }
     else
     {
      max0+=v2[1]+v1[2];

     }

      
      }
      else if(max0==v2[0])
      {
        if(v1[1]>=v3[1])
        {
          max0+=v1[1]+v3[2];
        }
     else
     {
      max0+=v3[1]+v1[2];

     }

      }
      else
      {
        if(v2[1]>=v3[1])
        {
          max0+=v2[1]+v3[2];
        }
     else
     {
      max0+=v3[1]+v2[2];

     }


      }
      

cout<<max0<<"\n";
    }

  
}