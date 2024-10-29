#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 vector<int> v;int n;
 int print (int i)

 {


    if (i == n)
    return 0;
    return v[i]+print(i+1);
 }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

 int t;
 cin >> t;
 int index=0;
 while (t--) {

    cin >> n;
   v.clear();
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout<<"Case "<<1+index++ <<": "<<print(0)<<endl;

 }
}