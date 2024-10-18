#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<long long>> v2(m, vector<long long>(3));
    for (long long i = 0; i < m; i++) {
        cin >> v2[i][0] >> v2[i][1] >> v2[i][2];
    }

    vector<long long> v3(m, 0);

    for (long long i = 0; i < k; i++)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        v3[l]++;
        if (r + 1 < m)
            v3[r + 1]--;
    }

    for (long long i = 1; i < m; i++) 
        v3[i] += v3[i - 1];

    vector<long long> v4(n, 0);

    for (long long i = 0; i < m; i++)
    { 
        long long l, r, v;
        l = v2[i][0];
        r = v2[i][1];
        v = v2[i][2];
        l--;
        r--;
        
        v4[l] += v3[i] * v;
        if (r + 1 < n)
            v4[r + 1] -= v3[i] * v;
    }

    for (long long i = 1; i < n; i++) 
        v4[i] += v4[i - 1];

    for (long long i = 0; i < n; i++)
    {
        v[i] += v4[i];
        cout << v[i] << " ";
        //
    }
}
