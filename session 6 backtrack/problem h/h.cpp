#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n;
vector<long long> v;
int counter=0;

void print (long long i, long long x, long long k)

{

    if (i==n)
    {
        if (x>k)
            counter++;
        return ;
    }

    if (v[i]%2)
    print (i+1, x, k+1);
    else
    print (i+1, x+1, k);

    print(i+1, x, k);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  cin>>n;
  v.resize(n);
  for(int i=0; i<n; i++)
    cin>>v[i];


    print (0,0,0);
    cout<<counter;
}