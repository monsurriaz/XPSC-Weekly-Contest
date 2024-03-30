#include <bits/stdc++.h>
#define veci vector<int>
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

// functions
void loop(int i, int n, veci &v){for(int i=0; i<n; i++) cin >> v[i];}
bool isPalindrome(int ai, veci v)
{
    veci tmp;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] != ai)
        {
            tmp.push_back(v[i]);
        }
    }

    bool ok = true;
    int i = 0, j = tmp.size()-1;
    while (i < j)
    {
        if(tmp[i] != tmp[j])
        {
            ok = false;
            break;
        }
        i++;
        j--;
    }
    return ok;
}

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

        int i = 0, j = n - 1;
        int ai, aj;
        bool ok = true;
        while (i < j)
        {
            if(v[i] != v[j])
            {
                ai = v[i];
                aj = v[j];
                ok = false;
                break;
            }
            i++;
            j--;
        }

        if(ok)
        {
            yes;
        }
        else
        {
            bool ans1 = isPalindrome(ai, v);
            bool ans2 = isPalindrome(aj, v);

            if(ans1 || ans2)
                yes;
            else
                no;
        }
    }
    return 0;
}
