#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool frq[26];
    
    for (int i=0; i<s.size(); i++)
    {
        int idx = s[i]-'a';
        frq[idx] = true;
    }

    bool ok = false;
    for (int i=0; i<26; i++)
    {
        if (!frq[i])
        {
            char c = i + 'a';
            cout << c << endl;
            ok = true;
            break;
        }
    }

    if (!ok)
    {
        cout << "None" << endl;
    }
    return 0;
}