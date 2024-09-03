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
    string t;
    cin >> t;
    string temp="";

    stack<char> st;
    for(int i=0; i<s.size(); i++)
    {
        st.push(s[i]);
    }
      long long n=s.size();
      while(n--)
      {
        temp=st.top()+temp;
        st.pop();
        s.pop_back();
        //cout<<temp+s<<endl;
        if(temp+s==t)
        {cout<<"Yes";
        return 0;}

      }
cout<<"No";

}