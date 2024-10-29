#include <iostream>
#include <bits/stdc++.h>

using namespace std;
set <long long >s;
  long long n;
void print (long long x)

{

  

    if (x>n)
    return;
if (x!=0)
   s.insert(x);
    print (x*10+4);
    if (x!=0)
  s.insert(x);
  
    print (x*10+7);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

 
    cin >> n;
print (0);
cout<<s.size();


    
}