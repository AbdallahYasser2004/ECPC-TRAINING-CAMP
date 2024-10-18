#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

bool pred(int n, vector<long long>& v) {
   
        set <long long> s;
        map <long long, long long> mp;
        long long counter=0;
        for(long long i = n; i < v.size();i++)
       { 
        s.insert(v[i]);
       
       mp[v[i]] ++;}



        if (s.size()==v.size()-n)
        return 1;

        
        for( int i = 1; i < v.size()-n+1; i++)   
        {
            if (mp[v[i+n-1]]>1)
            {
            mp[v[i+n-1]] --;}
            else
            {s.erase(v[i+n-1]);

            }
                  
        s.insert(v[i-1]);
        mp[v[i-1]] ++;
           
            if (s.size()==v.size()-n)
        return 1;



        }

        return 0;
       

        
}

int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int str = 0;
    int en = n-1;
    int ind = n; 

    while (str <= en) {
        int mid = (str + en) / 2;
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