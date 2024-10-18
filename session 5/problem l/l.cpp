#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;
long long t;
bool pred(long long n, vector<long long>& v) {
   long long sum = 0;
     for(int i = 0; i < v.size(); i++)
     {if (n/v[i]>=t)
     return 1;
       sum+=n/v[i];
       if (sum>=t)
       return 1;
     }

     if (sum>=t)
       return 1;

       return 0;    
       

        
}

int main() {
    int n;
    cin >> n;
    cin>>t;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long str = 0;
    long long en = *max_element(v.begin(), v.end()) * t;
    long long ind = 0; 

    while (str <= en) {
        long long mid = (str + en) / 2;
        if (pred(mid, v)) {
            ind = mid;
           en = mid - 1;
        } else {
             str = mid + 1;
        }
    }

    cout << ind << endl;
    return 0;
}