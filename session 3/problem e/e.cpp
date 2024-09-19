#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<char,int> m;
string s1,s2;
   getline(std::cin, s1);
   getline(std::cin, s2);

    for(int i=0;i<s1.size();i++)
    {if(s1[i]!=' ')
        m[s1[i]]++;
    }

    for(int i=0;i<s2.size();i++) 

    if(s2[i]!=' ')
    
    {if (m.find(s2[i])==m.end() )
    {
        //cout<<s2[i];
        cout<<"NO";

        return 0;
    }
    else
    {
        m[s2[i]]--;
        if(m[s2[i]]==0)
        m.erase(s2[i]);
    }
    
    
    
    }
    cout<<"YES";

}