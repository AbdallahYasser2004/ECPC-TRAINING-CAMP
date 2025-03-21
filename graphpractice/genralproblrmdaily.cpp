#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

vector<vector<pair<int, int>>> adjacent;
vector<int> visited;
int counter = 0;
set<int> weights;
void dfs(int node, int curr, int target) {
    if (node == target) {
        counter++;
       // return;
    }

    visited[node] = 1; 

    for (auto neighbor : adjacent[node]) {
        if (!visited[neighbor.first] && (curr == 0 || curr == neighbor.second)) {
            dfs(neighbor.first, neighbor.second, target);
        }
    }

    visited[node] = 0; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    
    adjacent.resize(n + 1);
    
    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        adjacent[x].push_back({y, w});
        adjacent[y].push_back({x, w});
        weights.insert(w);
    }

    int q;
    cin >> q;

    while (q--) {
        int x, y;
        cin >> x >> y;

          counter = 0;
        for(int w : weights)
        {
          
        visited.assign(n + 1, 0); 
        dfs(x, w, y);
    }
        
        cout << counter << endl;
    }

    return 0;
}
