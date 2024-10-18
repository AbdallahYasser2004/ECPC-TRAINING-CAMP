#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector <long long > v;
vector <long long > v1;
long long n,k;

bool can(long long mid)
{ long long need=0;
long long have=k;
    for(int i = 0; i<n; i++)
    {
        if (v[i]*mid>v1[i])
       { have-=v[i]*mid-v1[i];
        if (have<0)
        return false;}
    
    }

return true;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    v.resize(n);
    v1.resize(n);
    for(int i=0; i<n; i++)
    cin >> v[i];
    for(int i=0; i<n; i++)
    cin >> v1[i];


   long long st=0;
   long long en=2e9;

long long index=0;
   while (st<=en)
   {
       long long mid=(st+en)/2;
       if(can(mid))
       {
        index=mid;
        st=mid+1;

       }
       else 
       {
        en=mid-1;
       }


   }

   cout<<index<<endl;
    return 0;


}