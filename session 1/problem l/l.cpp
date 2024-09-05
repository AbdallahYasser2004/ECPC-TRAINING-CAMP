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
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
    int serejasum=0;
    int demasum=0;



    for(int i = 0; i<n; i++)
    {
        if(i % 2 == 0)
        {   
            if(dq.front() >=dq.back())
            {serejasum += dq.front();
            dq.pop_front();}
            else
            {
                serejasum += dq.back();
                dq.pop_back();
            }
        }
        else
            {   
            if(dq.front() >=dq.back())
            {demasum += dq.front();
            dq.pop_front();}
            else
            {
                demasum += dq.back();
                dq.pop_back();
            }
        }
    }
    cout<<serejasum<<" "<<demasum<<"\n";
}