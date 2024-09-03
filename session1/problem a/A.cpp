#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);

   long long q;
   cin >> q;
   deque<long long> v ;
   while (q--)
   {
    string s;
    long long x;
    cin >> s ;
    if (s == "push_front")
    {
        cin>>x ;
        v.push_front(x);
    }
    else if (s == "push_back")
    {
        cin>>x ;
        v.push_back(x);
    }
    else if (s == "pop_front")
    {
        if (!v.empty())
            v.pop_front();
    }
    else if (s == "pop_back")
    {
        if (!v.empty())
            v.pop_back();
    }
    else if (s == "front")
    {
        if (!v.empty())
            cout << v.front() << endl;
    }
    else if (s == "back")
    {
        if (!v.empty())
            cout << v.back() << endl;
    }
    else if (s=="print")

    {cin>>x;
    cout<<v[x-1]<<endl;}

   }
   
}