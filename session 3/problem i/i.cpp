#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, q;
    cin >> n >> q;

    
    vector<int> freq(n + 1, 0);

    while (q--)
    {
        long long i, j;
        cin >> i >> j;

        if (i == 1)
        {
            
            freq[j]++;
        }

        if (i == 2)
        {

            cout << freq[j] << endl;
        }
    }

    return 0;
}
