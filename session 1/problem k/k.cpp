#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   long long t;
   cin >> t;
   while (t--)
   {
    long long n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    deque<int>dq;
    for(int i=0;i<n;i++)
    {
        if(dq.empty())
        dq.push_back(v[i]);
        else
        {
            if(dq[0]<v[i])
            dq.push_back(v[i]);
            else
            dq.push_front(v[i]);
        }
    }
    for(int i=0;i<dq.size();i++)
cout<<dq[i]<<" ";
cout<<endl;


   }
   




}