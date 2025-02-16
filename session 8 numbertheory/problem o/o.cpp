#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long n=1e12+1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;
    cin>>t;

    while (t--)
    {
long long n;
        cin>>n;
      // vector <long long> v;

long long en =-1;
long long x=sqrt(n);
        for(long long i=2 ;i<=x;i++)
        {

            while (n%i==0)
            {
               en=i;
                n=n/i;
            }
            if (n==1)
                break;
            if (n>1)
            { en=n;
               
            }
        }


        cout<<en<<endl;
    }
 
}