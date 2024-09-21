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

 
map<char,int> m;
  for(long long i = 0; i < n; i++)
  {char c;
  cin >> c;
    m[c]++;
  }


  for(auto it = m.begin(); it != m.end();it++)
  {
    for(long long j = 0; j <it->second; j++)
   cout<<it->first;
  }

  
}