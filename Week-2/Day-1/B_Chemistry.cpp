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
#define mapc map<char, int>
#define maps map<string, int>
#define ll long long int
#define MAX INT_MAX
#define MIN INT_MIN
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        mapc mp;
        
        for(int i=0; i<n; i++)
        {
            if(mp.find(s[i]) == mp.end())
            {
                mp[s[i]] = 1;
            }
            else
            {
                mp[s[i]]++;
            }
        }
        int dsnct = 0;
        veci oddOccur;
        for(auto i : mp)
        {
            if(i.second == 1)
                dsnct++;
            else
            {
                int x = i.second;
                if(x%2 == 1)
                    oddOccur.push_back(x);
            }
        }

        if(++k >= (dsnct + oddOccur.size()))
            yes;
        else
            no;
    }
    return 0;
}
