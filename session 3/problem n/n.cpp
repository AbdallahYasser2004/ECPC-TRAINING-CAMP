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
    vector< long long > v(n);

    vector< long long > v2(n);

    for(int i = 0; i < n; i++) 
    {cin >> v[i];
    
    v2[i] = v[i];}
    
    sort(v2.begin(),v2.end());

    for(int i = 1; i < n; i++)
    {
v[i]+=v[i-1];
        v2[i]+=v2[i-1];
    }
    long long m;
    cin >> m;
    for(int i = 0;i<m;i++)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            long long l,r;
            cin >> l >> r;
            l--;
            r--;
            long long res=v[r];
            if(l>0)
            res=res-v[l-1];

            cout << res << "\n";
        }

        else
        {
             long long l,r;
            cin >> l >> r;
            l--;
            r--;
            long long res=v2[r];
            if(l>0)
            res=res-v2[l-1];
            cout << res << "\n";
        }
    }
}