#include <iostream>
#include <vector>

using namespace std;

vector<int> v(1000000); // Correct size for 10^7

long long product(int x) {
    long long prod = 1; // Use long long to avoid overflow
    while (x) {
        if (x % 10) // Only multiply if the digit is not zero
            prod *= x % 10;
        x /= 10;
    }
    return prod;
}

int calc(int x) {
    if (x < 10) {
        return x; // Base case
    }
    
    if (x >= v.size()) return x; // Handle out of bounds
    if (v[x] == 0) { // If not computed yet
        v[x] = calc(product(x)); // Recursively calculate
    }
    return v[x]; // Return computed value
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q; // Read n and q
    cout << "Reading n and q: " << n << ", " << q << endl;

    while (q--) {
        int l, r, p;
        cin >> l >> r >> p; // Read l, r, p
      

        int counter = 0;
        
        for (int i = l; i <= r; i++) {
            if (calc(i) == p) {
                counter++;
            }
        }

        cout << counter << "\n"; // Output result for this query
    }

    return 0;
}
