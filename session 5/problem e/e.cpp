#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long n, s;
vector<long long> v;

long long can(long long mid) {
    vector<long long> v1 = v;
    
    for (int i = 0; i < n; i++) {
        v1[i] = v1[i] + (i + 1) * mid;
    }

    sort(v1.begin(), v1.end());

    long long sum = 0;
    for (int i = 0; i < mid; i++) {
        sum += v1[i];
    }

    if (sum <= s) {
        return sum;
    } else {
        return -1;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    v.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long st = 0, en = n;
    long long best_mid = 0, best_sum = 0;

    while (st <= en) {
        long long mid = (st + en) / 2;
        long long result = can(mid);

        if (result != -1) {
            best_mid = mid;
            best_sum = result;
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }

    cout << best_mid << " " << best_sum << endl;
    return 0;
}
