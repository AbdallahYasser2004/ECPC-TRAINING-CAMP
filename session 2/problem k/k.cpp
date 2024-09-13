#include <iostream>
#include <map>
#include <stack>

using namespace std;

int main()
{
    stack<string > k;
    map<string ,int> mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        k.push(s);
    }
   
    while(!k.empty())
    {
        if(mp[k.top()]==0)
        {
            cout<<k.top()<<endl;
            mp[k.top()]++;
            k.pop();
        }
        else
            k.pop();
    }
}