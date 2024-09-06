#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

string s;
cin >> s;
stack<int> s1;

int counter = 0;
int maxi=0;
for(int i = 0; i <s.size(); i++)

{   if(!s1.empty()&&s1.top()=='(')
        {
            if(s[i]==')')
            {
                s1.pop();
                counter+=2;
            }
            else
            {
                s1.push(s[i]);
                
            }
        }
        else
        {
            if(s[i]=='(')
            {   maxi=max(maxi,counter); 
                
                s1.push(s[i]);
                
                
            }
           
        }
        //cout<<s[i]<<" "<<counter;
        //maxi=max(maxi,counter);
}

 maxi=max(maxi,counter);
 


//cout<<s1.size()<<" ";
cout<<maxi;
}