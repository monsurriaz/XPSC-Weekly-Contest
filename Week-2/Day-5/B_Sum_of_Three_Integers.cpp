/*
    author: monsur_riaz
    created: 2024-03-26 23:08:30"
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            for (int m = 0; m <= k; m++)
            {
                if (s - i - j == m)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}
