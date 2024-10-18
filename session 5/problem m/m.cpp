#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;
long long t;
bool pred(long long n, vector<long long>& v) {
    long long need = 0; 
    long long m = v.size() / 2;
     if (v[m] < n) {
            need += abs(v[m] - n);  
        }

    for (long long i = m+1; i < v.size(); i++) {
        if (v[i] < n) {
            need += abs(v[i] - n);  
        }
        if (need > t) return false;  
    }

    return need <= t; 
}
int main()
 {
    long long n;
    cin >> n;
    cin>>t;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
sort(v.begin(), v.end());
    long long str = 1;
    long long en = *max_element(v.begin(), v.end()) +t;
    long long ind = 0; 

    while (str <= en) {
        long long mid = (str + en) / 2;
        if (pred(mid, v)) {
            ind = mid;
           str = mid + 1;
        } else {
             en = mid - 1;
        }
    }

    cout << ind << endl;
    return 0;
}