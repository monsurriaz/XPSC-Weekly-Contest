/*
    author: monsur_riaz
    created: 2024-03-27 14:24:57"
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string name = "Timur";
    sort(name.begin(),name.end());

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string nm;
        cin >> nm;

        sort(nm.begin(), nm.end());
        bool ok = true;

        if(name != nm)
        {
            ok = false;
        }

        if(ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
