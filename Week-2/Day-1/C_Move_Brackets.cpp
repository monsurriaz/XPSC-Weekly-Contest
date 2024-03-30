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
        string brackets;
        cin >> brackets;

        stack<char> st;

        for(int i = 0; i < n; i++)
        {
            if(brackets[i] == ')')
            {
                if(!st.empty())
                {
                    char top = st.top();
                    if(top == '(')
                    {
                        st.pop();
                    }
                }
            }
            else
            {
                st.push(brackets[i]);
            }
        }

        cout << st.size() << nl;
    }
    return 0;
}