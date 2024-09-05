#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool sortbysec(const pair<string,long long> &a,
            const pair<string,long long> &b)
{   if(a.second == b.second) 
return a.first < b.first;
    return (a.second > b.second);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
long long n;
   cin >> n;
   vector < pair<string, long long > > v(n);
   for(int i = 0; i < n; i++)
   {
    string s;
    cin >> s;
    v[i].first=s;
   
    long long x;
    cin>>x;
  v[i].second =x;


   }
   sort(v.begin(),v.end(), sortbysec);
   
   for(int i=0;i<n;i++)
   {
    cout<<v[i].first<<" ";
   
  cout<<v[i].second<<" ";
   
    cout<<"\n";

   }

}