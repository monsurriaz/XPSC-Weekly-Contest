/*
    author: monsur_riaz
    created: 2024-03-27 11:48:47"
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string name = "Timur";
    map<char, int> mp;
    for(char x : name)
    {
        mp[x]=1;
    }

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string nm;
        cin >> nm;

        bool ok = true;

        if(nm.size() != name.size())
        {
            ok = false;
        }
        else
        {
            for(char c : nm)
            {
                if(mp.count(c) == 0)
                {
                    ok = false;
                    break;
                }
            }
        }

        if(ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
