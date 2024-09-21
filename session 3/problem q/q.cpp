#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool compare(const pair<long long, int>& a, const pair<long long, int>& b) {
   
    if (a.first != b.first) {
        return a.first > b.first;
    }
    
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   long long n,k;
    cin >> n >> k;
    vector<pair <long long ,int > > v(n);
    vector<pair <long long ,int > > v2(k);
    for(long long i = 0; i <n; i++) 
   {
    long long x;
    cin >> x;
    v[i].first = x;
    v[i].second =i;
   }

   sort(v.begin(),v.end(),compare);
   long long sum=0;
   for(long long i = 0; i <k; i++)
   {
    sum+=v[i].first;
    v2[i].first=v[i].second;
    v2[i].second=v[i].first;
   }
sort (v2.begin(),v2.end());
cout<<sum<<endl;


long long y=0;
for(int i=1;i<k;i++)
{     
   cout<< (v2[i].first-y)<<" "; 
   y=v2[i].first;
}
cout<<n-y;

   

}