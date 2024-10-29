#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long n,l,r,x;
vector <long long >v;
vector <long long >v1;
long long counter=0;
void print (int i,long long sum)

{
    if (i==n)

    {
        if (sum>=l && sum<=r)
        if (v1[v1.size()-1]-v1[0]>=x)
        counter++;
        return;
    }
v1.push_back(v[i]);
    print(i+1,sum+v[i]);
    v1.pop_back();
    print(i+1,sum);



}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   cin>>n>>l>>r>>x;
   v.resize(n);
   for(int i=0; i<n; i++)
   {
cin>>v[i];
   }
   sort(v.begin(),v.end());

print (0,0);
cout<<counter;

}