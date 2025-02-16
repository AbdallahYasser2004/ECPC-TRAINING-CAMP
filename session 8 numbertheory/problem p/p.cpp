#include <iostream>
#include <vector>
#include<algorithm>
#include<math.h>
using namespace std;
int n;

bool is_prime (long long x)
{
  if (x <= 1) return false;
  

  for(long long i=2 ;i*i<=x ;i++)
  {
    if (x % i == 0) return false;
  }
  return true;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//sieve();

vector <int> v;


cin>>n;for(int i=0;i<=n+1;i++)
{
 if (is_prime(i))
 v.push_back(i)  ;
}
int k;
cin>>k;
int counter=0;
for(int i=0;i<v.size()-1;i++)
{
  if (v[i]+v[i+1]+1<=n && v[i+1]+v[i]+1>=0 && is_prime(v[i]+v[i+1]+1))
 { 
 
  counter++;}
}
if(counter>=k)

cout<<"YES";
else
cout<<"NO";





    

    return 0;
}
