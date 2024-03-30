/*
    author: monsur_riaz
    created: 2024-03-28 11:00:31"
*/

#include <bits/stdc++.h>
#define veci vector<int>
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }

        string str;
        str.push_back(s[0]);
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] != str.back())
            {
                str.push_back(s[i]);
            }
        }

        if(str == "meow")
            yes;
        else
            no;
    }
    return 0;
}