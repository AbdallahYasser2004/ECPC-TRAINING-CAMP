#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   set<long long>se;
   int q;
   cin >> q;
   while(q--)
{
    string s;
    cin >> s;
    if(s=="insert")
    {
        long long x;
        cin >> x;
        se.insert(x);
    }
    else if(s=="find")
    {
        long long x;
        cin >> x;
        if(se.find(x)!=se.end())
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    else if (s=="lower_bound")
    {
        long long x;
        cin >> x;
        auto it = se.lower_bound(x);
        if(it!=se.end())
            cout << *it << endl;
        else
            cout << "-1" << endl;
    }
    else if(s=="upper_bound")
    {
        long long x;
        cin >> x;
        auto it = se.upper_bound(x);
        if(it!=se.end())
            cout << *it << endl;
        else
            cout << "-1" << endl;
    }
}


}