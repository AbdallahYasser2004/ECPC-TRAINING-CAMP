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
    
   
    vector<vector<long long>> arr(n+1, vector<long long>(n+1, 0));

  
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char x;
            cin >> x;

            arr[i][j] = (x == '.') ? 0 : 1;
            
           
            arr[i][j] += arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1];
        }
    }

   
    while (q--)
    {
        long long l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

      
        long long res = arr[l2][r2] - arr[l2][r1-1] - arr[l1-1][r2] + arr[l1-1][r1-1];
        cout << res << '\n';
    }

    return 0;
}
