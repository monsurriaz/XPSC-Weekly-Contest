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
        bool parity;

        v.size()%2 == 0 ? parity = true : parity = false;
        set<int> st(v.begin(), v.end());

        bool setParity;
        st.size()%2 == 0 ? setParity = true : setParity = false;
        
        if(parity == setParity)
            cout << st.size() << nl;
        else
            cout << (st.size()-1) << nl;
    }
    return 0;
}
