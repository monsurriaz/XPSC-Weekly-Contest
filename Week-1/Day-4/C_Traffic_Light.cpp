/*
    https://codeforces.com/problemset/problem/1744/C
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
        int n;
        cin >> n;
        char c;
        string s;
        cin >> c >> s;

        int dis = 0;
        int ans = 0;

        s += s;

        for (int i = s.size()-1; i >= 0; i--)
        {
            dis++;
            if (s[i] == 'g')
            {
                dis = 0;
            }

            if (s[i] == c)
            {
                ans = max(ans, dis);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
