#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 vector<long long> v(10e9+1);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   long long n;
   cin >> n;
   while(n--)
   {
    long long x;
    cin >> x;
    long long y;
    cin >> y;
    
    v[x]++;
    v[y]--;

   }
   for(int i=0; i<v.size(); i++)
   {
    v[i+1]+=v[i];
   }
   vector<long long> l;
   int flag =0;
   for(int i=1;i<v.size();i++)
   {
      if (flag ==0)
      {
         if(v[i]!=0){
         flag = 1;
         l.push_back(i);}
      }

      if(flag ==1)
      {if(v[i]==0){
      l.push_back(i);
      flag =0;}}
   }

//    for(int i=0;i<v.size();i++)
  //  cout<<v[i]<<" ";

for(int i=0;i<l.size();i+=2)
cout<<l[i]<<" "<<l[i+1]<<endl;


}