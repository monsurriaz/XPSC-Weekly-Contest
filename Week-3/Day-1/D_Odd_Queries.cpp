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
        int n, q;
        cin >> n >> q;
        veci v(n);
        loop(0, n, v);

        veci prefix(n), suffix(n);

        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                prefix[i] = v[i];
                continue;
            }
            prefix[i] = v[i] + prefix[i-1];
        }

        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                suffix[i] = v[n-1];
                continue;
            }
            suffix[i] = suffix[i-1] + v[n-i-1];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            int leftSum = 0;
            if(l != 1) leftSum = prefix[l-1-1];

            int rightSum = 0;
            if(r != n) rightSum = suffix[n-r-1];
            
            int middleSum = (r-l+1) * k;
            int totalSum = leftSum + rightSum + middleSum;

            if(totalSum%2) yes;
            else no;
        }
    }
    return 0;
}