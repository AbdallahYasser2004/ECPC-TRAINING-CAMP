#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   string s;
   cin>>s;
   deque<char>q;
   for(int i=0;i<s.length();i++)
   {
     q.push_back(s[i]);
   }
   long long queries;
   cin>>queries;
   
   int flag=0;
   while(queries--)
   {
     int x;
        cin>>x;
        if(x ==1)
        flag=(!flag);
        else
        {
            if(flag==0) //msh reversed
            {
                long long l;
                cin>>l;
                char c;
                cin>>c;
                if(l==1)
                {
                    q.push_front(c);
                }
                else
                {
                    q.push_back(c);
                }
                

            }
            else
            {
                  long long l;
                cin>>l;
                char c;
                cin>>c;
                if(l==1)
                {
                    q.push_back(c);
                }
                else
                {q.push_front(c);
                    
                }
            }
        }





   }

if(flag==0)
for(int i=0;i<q.size();i++)
cout<<q[i];
else
{
    reverse(q.begin(),q.end());
    for(int i=0;i<q.size();i++)
    cout<<q[i];
}


}