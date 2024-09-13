#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   priority_queue<long long,vector<long long> ,greater<long long> > pq;
    long long q;
    cin >> q;
    while (q--)

    {
        string s;
        cin>>s;
        if(s=="push")
        {
            long long x;
            cin>>x;
            pq.push(x);
        }
        else if (s=="pop")
        {
            if(!pq.empty())
                pq.pop();
        }
        else if(s=="top")
        {
            if(!pq.empty())
                cout<<pq.top()<<"\n";
           
        }


    }



}