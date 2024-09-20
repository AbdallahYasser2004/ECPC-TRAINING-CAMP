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
    long long k;
    cin >> k;
    vector <long long> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

long long str=0;
long long en=k-1;
long long sum=0;
for(int i=0; i<=en; i++)
    {
        sum+=v[i];
    }
    long long maxi=1e8;
maxi=min(sum,maxi);
int index =0;
while (en!=n-1)
{
    sum-=v[str];
    str++;
    en++;
    sum+=v[en];
    if(sum<maxi)
    index=str;
    maxi=min(maxi,sum);



}
cout<<index+1<<endl;








}