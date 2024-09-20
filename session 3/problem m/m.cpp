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
    int m;
    cin >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    map <long long ,int > frq;
    for(int i = n-1; i >=0; i--)
    {
        if (frq.find(v[i]) == frq.end())
        {
            frq[v[i]] += 1;
            v[i] =1;
        }
        else
        {
            v[i]=0;
        }
    }
     for(int i = n-2; i >=0; i--)
     v[i]+=v[i+1];

     for(int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        x--;
        cout<<v[x]<<endl;
    
    }





   
}