#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   long long n;
   cin >> n;
   string s;
   cin >> s;
   deque<long long> v;
   v.push_back(0);
   char comp=s[0];
   stack<long long> st;
   for(long long i = 0; i < n; i++)
   {
    if(i)
    {
        if(s[i]!= comp)
           {
               
                if(comp=='R')
                {
                    st.push(v.back());
                    v.pop_back();
                    v.push_back(i+1);
                }
                else
                {
                     st.push(v.front());
                    v.pop_front();
                    v.push_front(i+1);
                    //q.push_front(i+1);
                }
               
           }
        else
            {
                if(comp=='R')
                {
                    v.push_back(i+1);
                }
                else
                {
                    v.push_front(i+1);
                }
            }
    }


    else
    {
        
                if(comp=='R')
                {
                    v.push_back(i+1);
                }
                else
                {
                    v.push_front(i+1);
                }
            }
    

   }
    vector<long long > l;
   while(!st.empty())
   {
         l.push_back(st.top());
         st.pop();
   }

  
  if(comp=='L')
  {reverse(l.begin(),l.end());
  for(int i=0;i<l.size();i++)
  cout<<l[i]<<" ";
 for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";}
  else
  { for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
    for(int i=0;i<l.size();i++)
  cout<<l[i]<<" ";
  }
    return 0;
}