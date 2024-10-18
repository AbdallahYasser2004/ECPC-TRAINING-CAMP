#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long n;
vector<int > v;
long long m;


bool print (long long sum,long long x)

{

if (x==n)

{
   if (sum==m)
   return true;
   return false;

}

return print (sum+v[x],x+1) || print (sum,x+1);


}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    
while (t--) {
cin>>m;
    cin>>n;
    v.clear();
    v.resize(n );
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


if (print(0,0))
    cout<<"YES\n";
else
    cout<<"NO\n";

}







}



