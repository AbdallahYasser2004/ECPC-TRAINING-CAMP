#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;


bool compareSecondElement(const vector<long long>& vec, long long value) {
    return vec[1] < value;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long q;
    cin >> q;
    vector<long long> v;
    deque<vector<long long>> dq;

    
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            long long x, c;
            cin >> x >> c;
            vector<long long> v2(3);
            v2[0] = x;         
            v2[1] = c;         
            v2[2] = x * c;     
            dq.push_back(v2);
        } else if (t == 2) {
            long long x;
            cin >> x;
            v.push_back(x);     
        }
    }

    
    for (int i = 0; i < dq.size(); i++) {
        if (i) {
            dq[i][1] = dq[i - 1][1] + dq[i][1];  
            dq[i][2] = dq[i - 1][2] + dq[i][2];  
        }
    }

    long long lastnumber = 0;
    long long lastsum = 0;

    
    for (int i = 0; i < v.size(); i++) {
        long long target = v[i] + lastnumber;

     
        auto it = lower_bound(dq.begin(), dq.end(), target, compareSecondElement);

        if (it != dq.end() && (*it)[1] == target) {
            
            cout << ((*it)[2]) - lastsum << endl;
            lastnumber = target;
            lastsum = (*it)[2];
        } else {
            if (it == dq.begin()) {
           
                cout << ((*it)[0] * target) - lastsum << endl;
                lastnumber = target;
                lastsum += ((*it)[0] * target) - lastsum;
            } else {
            
                auto prev_it = it - 1;
                long long sum = (*prev_it)[2] - lastsum;
                long long remaining = target - (*prev_it)[1];
                sum += remaining * (*it)[0];
                cout << sum << endl;

                lastnumber = target;
                lastsum += sum;
            }
        }
    }

    return 0;
}
