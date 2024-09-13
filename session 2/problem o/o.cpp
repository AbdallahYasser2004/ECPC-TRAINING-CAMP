#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool sortbysec(const pair<long long,long long> &a,
            const pair<long long ,long long> &b)
{   if(a.second == b.second) 
return a.first < b.first;
    return (a.second < b.second);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    vector<pair<long long,long long >> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end(),sortbysec);

   /* for(int i=0;i<n;i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }*/

    int counter =0;
    counter++;
    long long last= v[0].second;
    for(int i=1;i<n;i++)
    {
        if(last <= v[i].first)
        {
            counter++;
            last = v[i].second;
        }
    }
    cout << counter;
    return 0;

}