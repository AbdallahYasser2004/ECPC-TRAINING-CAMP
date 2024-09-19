#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
long long n,k;
    cin >> n >> k;
    map<char, deque<int>> m;
    string s;
    cin >> s;
    for(int i=0; i<n;i++)
    {
        m[s[i]].push_back(i);
    }
long long curr='a';
    while (k)
    {
        if (m[curr].size()!=0)
        {
            m[curr].pop_front();
            k--;
        }
        else
        {
            curr++;
            if (curr>'z')
            break;
        }
        
    }
string a="";

    for(int i=0; i<n; i++)
    {  if(m[s[i]].size())
          {if(m[s[i]].front()==i)
          {
            m[s[i]].pop_front();
            a+=s[i];
          }

          }
       
    }

    cout << a << endl;
    return 0;


}