#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(2*n);
    for(int i = 0; i <2*n; i++) cin >> v[i];
    map<int ,int > m;
    int current=0;
    int maxi=-1;

    for(int i = 0; i < 2*n; i++)
    {
       if (m[v[i]]==0)
       {
        //cout<<mv[i]<<endl;
         m[v[i]] = 1;
         current++;
        maxi=max(current,maxi);
       }
       else
       {
        m[v[i]] =0;
        m.erase(v[i]);
        current--;
       }
    }

   cout<<maxi;






}