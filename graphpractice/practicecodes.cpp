#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<int>> adjacent;
vector<int> visited;
int counter=0;
int p=-1;
vector <int> subco;

int func(int node) {
   // counter++;
   int sz=1;
    visited[node] = 1;
    
    for (int neighbor : adjacent[node]) {
        if (!visited[neighbor]) {
            sz+=func(neighbor);
             subco[node] = sz;
         
        }
    }
   
    return sz;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
   subco.assign(n+1,0);
    adjacent.resize(n + 1);
    visited.resize(n + 1, 0);

    for (int i = 2; i <= n-1; i++) {  
       int y;
       cin >> y;
        adjacent[i].push_back(y);
        adjacent[y].push_back(i);
    }
    int maxcounter=0;
    int components = 0;
    vector< int > v2;
    func(1);

//    for(int i=1;i<n+1;i++)
//     {
//         if(!visited[i])
//         {func(i);
//         v2.push_back(i);
//         maxcounter=max(maxcounter,counter);
//         counter=0;
//         components++;}
//     }
        //     cout<<components-1<<endl;
        // //cout<<maxcounter<<" "<<components;
        // for(int i=0;i<components-1;i++)
        // {
        //     cout<<v2[i]<<" ";
        //     if (i+1<n)
        //     {
        //         cout<<v2[i+1]<<endl;
        //     }


        for(int i=0;i<n;i++)
        {
            cout<<subco[i]<<" ";
        }
    return 0;
}
    

