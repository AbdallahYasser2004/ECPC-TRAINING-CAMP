#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        string str;
        cin >> str;
        if (str=="prev_permutation")
        { long long x;
        cin >> x;
        while(x--)
            prev_permutation(s.begin(),s.end());
            cout << s << "\n";
        }

        else if (str=="next_permutation")
        { long long x;
        cin >> x;
        while(x--)
            next_permutation(s.begin(),s.end());
            cout << s << "\n";
        }
    }
}