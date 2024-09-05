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
    long long q;
    cin >> q;
    vector<long long> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "upper_bound")
        {
            long long x;
            cin >> x;
            auto it = upper_bound(v.begin(), v.end(), x);
            if(it ==v.end())
            cout<<-1<<endl;
            else
            cout<<*it<<endl;
        }
        else if (s == "lower_bound")
        {
            long long x;
            cin >> x;
            auto it = lower_bound(v.begin(), v.end(), x);
            if(it ==v.end())
            cout<<-1<<endl;
            else
            cout<<*it<<endl;
        }
        else if (s=="binary_search")
        {
            long long x;
            cin >> x;
            cout<<(binary_search(v.begin(), v.end(), x)? "found" : "not found")<<endl;
        }
    }
}