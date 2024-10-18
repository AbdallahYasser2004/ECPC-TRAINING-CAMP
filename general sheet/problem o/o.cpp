#include <iostream>
#include <bits/stdc++.h>
using namespace std;





int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    vector<bool> x(n, false);
    x[0] = true;

    int y = d * d;

    for (int i = 0; i < n; ++i) {
        if (!x[i]) continue;

        for (int j = 0; j < n; ++j) {
            if (!x[j]) {
                int a = v[i].first - v[j].first;
                int b = v[i].second - v[j].second;

                int z = a * a + b * b;
                if (z <= y) {
                    x[j] = true;
                    for(int l = 0; l < n; ++l)
                    {
                        if (j==l||x[l]==true) 
                        {
                            continue;
                        }

                        if (!x[l]) {
                int a = v[l].first - v[j].first;
                int b = v[l].second - v[j].second;

                int z = a * a + b * b;
                if (z <= y) {
                    x[l] = true;
                }
                    }
                }
            }
        }
    }
    }
    for (int i = 0; i < n; ++i) {
        if (x[i]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
