#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,q;
    cin >> n >> q;
    deque<int> dq(n);
    for (int i = 0; i < n; i++) {
        cin >> dq[i];
    }
while (q--)
{
    long long x;
    cin >> x;
    int index=0;
    for(int i = 0; i < n; i++)
    if(dq[i] == x)
    {
        index = i;
        break;
    }
    cout<<index+1<<" ";
    dq.erase(dq.begin()+index);
    dq.push_front(x);
}



}