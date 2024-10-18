#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
long long n ,m;

set <long long >s;
void print  ( long long n, long long counter)
 {    if(n== m)
 {
    s.insert(counter);
    return;
 }


 if (n*3<=m)
 {
   
    print(n*3,counter+1);
 }
 if (n*2<=m)
 {
   
    print(n*2,counter+1);
 }





 }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    print(n,0);

    if (s.size()==0)
    cout<<-1;
    else
    cout<<*s.begin();


}