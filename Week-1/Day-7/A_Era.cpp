/*
    Problem statement
    https://codeforces.com/problemset/problem/1604/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > i+1)
                ans = max(ans, v[i]-(i+1));
        }
        cout << ans << '\n';
    }
    
    return 0;
}
