/*
    author: monsur_riaz
    created: 2024-03-27 11:28:14"
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<pair<int, string>> v1(n);
        for(int i = 0; i < n; i++)
        {
            int a;
            string s;
            cin >> a;
            cin >> s;

            v1[i].first = a;
            v1[i].second = s;
        }

        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < v1[i].first; j++)
            {
                if(v1[i].second[j] == 'D')
                {
                    if(v[i] == 9)
                        v[i] = 0;
                    else
                        v[i]++;
                }
                else
                {
                    if(v[i] == 0)
                        v[i] = 9;
                    else
                        v[i]--;
                }
            }
        }

        for(auto x : v)
            cout << x << " ";
        cout << '\n';
    }
    return 0;
}
