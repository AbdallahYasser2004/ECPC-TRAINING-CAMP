#include <iostream>
#include <vector>
#include <queue>

#include <algorithm>
using namespace std;

vector<pair<int, int>> adjacents = {
    {1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int n, m;

vector<vector<pair<int, int>>> bfs(int srcx, int srcy, vector<vector<char>> &grid)
{
    vector<vector<int>> visited(n, vector<int>(m, 0));
    vector<vector<pair<int, int>>> parents(n, vector<pair<int, int>>(m, {-1, -1}));
    queue<pair<int, int>> q;

    visited[srcx][srcy] = 1;
    q.emplace(srcx, srcy);
    parents[srcx][srcy] = {-1, -1}; 

    while (!q.empty())
    {
        auto f = q.front();
        q.pop();

        if (grid[f.first][f.second] == 'B')
        {
            return parents;
        }

        for (auto neighbor : adjacents)
        {
            int x = f.first + neighbor.first;
            int y = f.second + neighbor.second;

            if (y >= 0 && y < m && x >= 0 && x < n)
            {
                if (grid[x][y] != '#' && !visited[x][y])
                {
                    q.emplace(x, y);
                    visited[x][y] = visited[f.first][f.second] + 1;
                    parents[x][y] = {f.first, f.second};
                }
            }
        }
    }

    return {}; 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));

    int srcx = -1, srcy = -1, disx = -1, disy = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                srcx = i;
                srcy = j;
            }
            if (grid[i][j] == 'B')
            {
                disx = i;
                disy = j;
            }
        }
    }

    vector<vector<pair<int, int>>> parents = bfs(srcx, srcy, grid);

    if (parents.empty() || parents[disx][disy] == make_pair(-1, -1))
    {
        cout << "NO" << endl;
        return 0;
    }

    int currx = disx, curry = disy;
    vector<pair<int, int>> res;

    while (currx != -1 && curry != -1)
    {
        res.emplace_back(currx, curry);
        pair<int, int> prev = parents[currx][curry];
        currx = prev.first;
        curry = prev.second;
    }

  
    reverse(res.begin(), res.end());
int s1=res[0].first;
int s2=res[0].second;
cout<<"YES"<<endl;
cout<<res.size()-1<<endl;
  for(int i=1;i<res.size();i++)
  {
    if (res[i].first-res[i-1].first==1)
    {
        cout<<"D";
    }
    if (res[i].first-res[i-1].first==-1)
    {
        cout<<"U";
    }
    if (res[i].second-res[i-1].second==1)
    {
        cout<<"R";
    }
    if (res[i].second-res[i-1].second==-1)
    {
        cout<<"L";
    }


  }

    return 0;
}
