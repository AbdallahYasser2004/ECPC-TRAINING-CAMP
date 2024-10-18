#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
long long m;


set <long long > s ;

void print  ( long long n)
 {   
    
 if (n<=m)
 {
     s.insert(n);
 }
 if (n>m)
 return;

 print (n*10+0);
 print (n*10+1);




 }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> m;

    print(1);
 

    
cout<<s.size();


    return 0;


}