#include <iostream>
#include <map>
using namespace std;

int main()
{


   map <string ,int> m;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       string s;
       cin>>s;

       if(m[s]==0)
        cout<<"OK"<<endl;
       else
        cout<<s<<m[s]<<endl; m[s]++;
   }





}