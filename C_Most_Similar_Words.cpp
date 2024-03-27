/*
    author: monsur_riaz
    created: 2024-03-27 14:48:59"
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int mn = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            int ic = 0;
            int in = 0;
            
            for(char c : v[i])
            {
                ic += c;
            }
            for(char c : v[i+1])
            {
                in += c;
            }
            
            mn = min(mn, (abs(ic - in)));
        }

        cout << mn << '\n';
    }
    return 0;
}