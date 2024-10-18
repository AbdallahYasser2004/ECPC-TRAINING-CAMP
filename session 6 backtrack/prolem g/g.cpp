#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

using namespace std;

long long n;
vector<long long> v;
vector<vector<long long>> v2;
vector<long long> v1;

void print(long long i) {
    if (i == n) {
        v2.push_back(v1);  
        return;             
    }

   
    v1.push_back(v[i]);
    print(i + 1);

   
    v1.pop_back();
    print(i + 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    v.resize(n);  

    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    print(0);

  
    sort(v2.begin(), v2.end());

    for (long long i = 0; i < v2.size(); i++) {
        for (long long j = 0; j < v2[i].size(); j++) {
            cout << v2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
