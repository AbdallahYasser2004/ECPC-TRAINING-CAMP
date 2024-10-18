#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
long long m;


long long counter=LLONG_MAX;
void print  ( long long n,long long counter4,long long counter7)
 {   
    
     if(n>=m && counter4==counter7)
 {
    
        if (n<=counter )
        counter=n;

     
    
   return;
 }

 if (n>=10e9)
return;

 print (n*10+4,counter4+1,counter7);
 print (n*10+7,counter4,counter7+1);




 }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> m;

    print(0,0,0);
 

    
   
if (m>47)
 cout << counter;
 else
 cout << 47;



    return 0;


}