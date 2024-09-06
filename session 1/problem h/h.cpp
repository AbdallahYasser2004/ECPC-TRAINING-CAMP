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
    while (t--) {
        int n;
        cin >> n;
        int x=n;
string s;
        cin >> s;
        int i=0;
stack<int> st;
        while(x--)
        {
            if (!st.empty())
            {
                if(st.top() =='(' && s[i] ==')')
                {
                 st.pop();
               
                }
                else
                st.push(s[i]);
                 i++;
            }
            else 
            {
                st.push(s[i]);
                i++;
            }
        }

        cout<<st.size()/2<<endl;
}


}