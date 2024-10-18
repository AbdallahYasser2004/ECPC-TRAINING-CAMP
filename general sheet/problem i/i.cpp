#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool ok (string s1,string s2)
{
    if (s1.size()!= s2.size()) return false;
    int counter=0;

    for(int i = 0; i < s1.size(); i++)
    {
        if (s1[i]==s2[i])
        {
            counter++;
        }
    }

    if (counter==s1.size()-1) return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int n;
    cin >> n;

    int m;
    cin >> m;
   vector<string> v (n) ;

   for(int i = 0; i < n; i++)
   {
    cin >> v[i];}

    sort(v.begin(), v.end());
    int counter4=0;
    for(int i = 0; i < v.size()-1; i++)
    if(v[i]==v[i+1])
    {
        counter4++;
    }



   

    int counters2=0;
    int counters1=0;

    for(int i = 0; i < n; i++)
    { int counter =0;
        for(int j=0;j<n;j++)
        if(ok(v[i],v[j]))
        {

            counter++;
        }

        if (counter>=2)
        {
            counters2++;
        }
        else if (counter==1)
        {
            counters1++;
        }
        else
        {
             cout << "No";
            return 0;
            break;
        }
        
    }
int res = n-counters2;

    if (res<=2)
 {cout << "Yes";
            return 0;}

    else if (counters2==n-2 && counters1==2)
    {
         {cout << "Yes";
            return 0;}
    }


             cout << "No";
            return 0;
            
    
}