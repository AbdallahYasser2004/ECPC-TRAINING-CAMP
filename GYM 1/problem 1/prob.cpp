#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t;
    cin >> t;
    while (t--) {
   map <int, int> m ;
   int n;
    cin >> n;
int counter=0;
    for(int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        m[x]++;
        if(m[x] == 2)
        counter++;

        if (m[x]==4)
        {
            counter=2;
            break;
        }

        if(counter==2)
        break;

    }
    if(counter>=2)
    cout << "YES\n";
    else
    cout << "NO\n";
    }
   
}