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
    int ldem=2;
    int lnum=1;
    int num=-1;
    int dum=-1;
    for(int i = 2; i <=n;i++)
    {
         num=ldem;
         dum=ldem+lnum;
         ldem=dum;
         lnum=num;
        
    }
    if (n==0)
    cout<<1<<endl;
    else if (n==1)
    cout<<1<<endl;
    else
    cout<<num << endl;


   
}





