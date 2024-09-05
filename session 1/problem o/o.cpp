#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool sortbysec(const pair<string,vector<int>> &a,
            const pair<string,vector<int>> &b)
{   if(a.second[0] == b.second[0]) 
return a.first < b.first;
    return (a.second[0] > b.second[0]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
long long n;
   cin >> n;
   vector < pair<string, vector<int> > > v(n);
   for(int i = 0; i < n; i++)
   {
    string s;
    cin >> s;
    v[i].first=s;
    int sum =0;
    int x,y,z,l;
    cin>>x>>y>>z>>l;
    sum=x+y+z+l;
    v[i].second.resize(5);
    v[i].second[0]=sum;
    v[i].second[1]=x;
    v[i].second[2]=y;
    v[i].second[3]=z;
    v[i].second[4]=l;


   }
   sort(v.begin(),v.end(), sortbysec);
   //cout<<"\n"<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<v[i].first<<" ";
    for(int j=0;j<5;j++)
    {
        cout<<v[i].second[j]<<" ";
    }
    cout<<"\n";

   }

}