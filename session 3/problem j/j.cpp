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
    vector<long long> v(n);

    for(int i = 0; i < n; i++) cin >>v[i];

    int counter =0;
    int maxi=0;
    for(int i = 0; i < n; i++)
    

    {

        for(int j=i-1 ; j >= 0 ; j--)
        {
            if(v[j]<=v[j+1])
            counter++;
            else
            break;
        }

        for(int j=i ; j <n-1 ; j++)
        {
            if(v[j]>=v[j+1])
            counter++;
            else
            break;
        }

        maxi = max(maxi, counter);
        counter = 0;




    }
if(maxi)
    cout<<maxi+1;
    else cout<<1;
}