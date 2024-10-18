#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,q;
    cin >> n >> q;
    vector<long long> v(n); vector<long long> v1(n);
    for(int i=0; i<n; i++) 
    {cin >> v[i];
    v1[i] = v[i];
    }    
   
    for(int i=0; i<n; i++) 
    if (i)
    v1[i] +=v1[i-1];

    while(q--)
    {
        long long x;
        cin >> x;
        long long res2;
        auto it = lower_bound(v1.begin(), v1.end(), x);
        long long res = it -v1.begin();
        if (res>0)
        res2 =x-v1[res-1];
        else 
        res2=x;


        cout << res+1 << " " << res2 << "\n";

    }


}