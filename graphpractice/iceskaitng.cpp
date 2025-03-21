#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<int>> adjacent;
vector<int> visited;
int counter = 0;

bool func(int node,int parent) {
   
    visited[node] = 1;

    for (int neighbor : adjacent[node]) {
        if (visited[neighbor] && neighbor!=parent)
        {
            return true;
        }
        if (!visited[neighbor]) {
           if ( func(neighbor,node))
           return true;
        }
    }
    return false;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int z, l;
    cin >> z >> l;
    vector<vector<int>> x(z, vector<int>(l, 0));  
    vector<vector<int>> mod(z, vector<int>(l, 0));  
    int counter=1;
    for (int i = 0; i < z; i++) {
        for (int j = 0; j < l; j++) {
           mod[i][j]=counter++;
    }}
    int number = 0;
    for (int i = 0; i < z; i++) {
        for (int j = 0; j < l; j++) {
            char c;
            cin >> c;
           
                x[i][j] = c;
        }}
    adjacent.resize(z*l + 1);
    visited.resize(z*l  + 1, 0);
    for (int i = 0; i < z; i++) {
        for (int j = 0; j < l; j++) {
           
                if (i + 1 < z && x[i + 1][j] == x[i][j]) {
                    adjacent[mod[i][j]].push_back(mod[i + 1][j]);
                 //   adjacent[x[i + 1][j]].push_back(x[i][j]);
                }
                if (j + 1 < l && x[i][j + 1] == x[i][j]) {
                    adjacent[mod[i][j]].push_back(mod[i][j + 1]);
                  //  adjacent[x[i][j + 1]].push_back(x[i][j]);
                }
                if (i - 1 >= 0 && x[i - 1][j] == x[i][j]) {
                    adjacent[mod[i][j]].push_back(mod[i - 1][j]);
                   // adjacent[x[i - 1][j]].push_back(x[i][j]);
                }
                if (j - 1 >= 0 && x[i][j - 1] == x[i][j]) {
                    adjacent[mod[i][j]].push_back(mod[i][j - 1]);
                   // adjacent[x[i][j - 1]].push_back(x[i][j]);
                }
           
        }
    }

    int maxcounter = 0;
    int components = 0;

    for (int i = 1; i <= z*l; i++) {
        if (!visited[i]) {
          
           if ( func(i,-1))
           {
            cout<<"Yes";
            return 0;
           }
          
        }
    }

    cout  << "No";
    return 0;

}