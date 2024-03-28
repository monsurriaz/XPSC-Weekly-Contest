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

        for (int i = 0; i < n; i++)
        {
            if(mp.count(v[i]) > 0)
            {
                mp[v[i]] = mp[v[i]]+1;
            }
            else
            {
                mp[v[i]] = 1;
            }
        }

        for(int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                
            }
            
        }
    }
    return 0;
}