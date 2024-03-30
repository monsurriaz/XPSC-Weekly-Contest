/*
    author: monsur_riaz
    created: 2024-03-28 11:00:31"
*/

#include <bits/stdc++.h>
#define veci vector<int>
#define vecs vector<string>
#define pii pair<int, int>
#define pis pair<string, int>
#define mapi map<int, int>
#define maps map<string, int>
#define ll long long int
#define MAX INT_MAX
#define MIN INT_MIN
#define nl '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;

// functions
void loop(int i, int n, veci &v){for(int i=0; i<n; i++) cin >> v[i];}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        veci v(n);

        loop(0, n, v);
        mapi mp;

        for(int i=0; i<n; i++)
        {
            if(mp.find(v[i]) == mp.end())
            {
                mp[v[i]] = 1;
            }
            else{
                mp[v[i]]++;
            }
        }

        int mx = MIN;
        for(auto it : mp)
        {
            mx = max(mx, it.second);
        }

        int cnt = 0;
        int crnt = mx;

        while (crnt < n)
        {
            cnt++;
            cnt += crnt;
            crnt += crnt;
        }
        
        if (crnt > n)
            cnt -= (crnt - n);

        cout << cnt << nl;
    }
    return 0;
}
