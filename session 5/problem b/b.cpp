#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long n,k;
bool can(long long mid)
{
    long long x=mid;

    long long sum=mid;
    long long p=k;

   while (x/p)
   {
    sum += x/p;
    p*=k;
    
   }


   if(sum>=n)
   return true;
   else
   return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   cin>>n>>k;

   long long st=0;
   long long en=n;

long long index=0;
   while (st<=en)
   {
       long long mid=(st+en)/2;
       if(can(mid))
       {
        index=mid;
        en=mid-1;

       }
       else 
       {
        st=mid+1;
       }


   }

   cout<<index<<endl;
    return 0;
}