#include <iostream>
#include <vector>

using namespace std;

//#define int long long
vector<vector<int> > adjacent;
vector <int >cats;
vector <int > visited;

int n;
   
    int m;
int ans=0;
int flag=0;
int check=1;

bool func(int node,int parent) {
   
    visited[node] = check;
    if (adjacent[node].size()!=2)
    {
        flag=1;
        return false;
       
    }

    for (int neighbor : adjacent[node]) {
      
        if (visited[neighbor]==check && neighbor!=parent)
        {
            return true;
        }
        if (visited[neighbor]!=check) {
           if ( func(neighbor,node))
           return true;
        }
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     cin>>n;
    cin>>m;
    adjacent.resize(n+1);
    visited.resize(n+1,0);
   
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adjacent[x].push_back(y);
        adjacent[y].push_back(x);
    }
int ans=0;
    for(int i=1;i<=n;i++)
    {
        if (!visited[i])
        { check++;
            if (func(i,-1))
            {
                if (flag==0)
                {
                   // cout<<i<<" ";
                    ans++;

                }
            }
            flag=0;

        }
    }
    cout<<ans;


   
}