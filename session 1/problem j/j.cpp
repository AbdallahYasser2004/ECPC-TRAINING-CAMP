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
    while (t--)
{

    string s;
    cin >> s;
    stack<int> s1; //()
    stack<int> s2; //[]
    int counter=0;
    for(int i=0;i<s.length();i++)
    {

     if(s[i]=='('|| s[i]==')')
     {

        if(!s1.empty()&&s1.top()=='(')
        {
            if(s[i]==')')
            {
                s1.pop();
                counter++;
            }
            else
            {
                s1.push(s[i]);
            }
        }
        else
        {
            if(s[i]=='(')
            {
                s1.push(s[i]);
                
            }
           
        }

     }
   else
   {
 if(!s2.empty()&&s2.top()=='[')
        {
            if(s[i]==']')
            {
                s2.pop();
                counter++;
            }
            else
            {
                s2.push(s[i]);
            }
        }
        else
        {
            if(s[i]=='[')
            {
                s2.push(s[i]);
                
            }
           
        }



   }



    }

cout<<counter<<endl;
}

}